#include "android_iso_bridge.h"

#include <jni.h>

#include <cerrno>
#include <cstdint>
#include <cstring>
#include <limits>
#include <mutex>
#include <string>
#include <vector>

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

namespace
{
    constexpr uint64_t kIsoSectorSize = 2048u;
    constexpr uint64_t kPrimaryVolumeDescriptorOffset = 16u * kIsoSectorSize;
    constexpr size_t kMaxJniReadBytes = 4u * 1024u * 1024u;

    std::mutex g_isoMutex;
    int g_isoFd = -1;
    uint64_t g_isoSize = 0u;

    bool preadExact(int fd, uint64_t offset, void *destination, size_t size)
    {
        if (fd < 0 || (!destination && size != 0u) ||
            offset > static_cast<uint64_t>(std::numeric_limits<off_t>::max()) ||
            size > static_cast<uint64_t>(std::numeric_limits<off_t>::max()) - offset)
        {
            return false;
        }

        auto *bytes = static_cast<uint8_t *>(destination);
        size_t completed = 0u;
        while (completed < size)
        {
            const off_t position = static_cast<off_t>(offset + completed);
            const ssize_t count = ::pread(fd, bytes + completed, size - completed, position);
            if (count < 0)
            {
                if (errno == EINTR)
                    continue;
                return false;
            }
            if (count == 0)
                return false;
            completed += static_cast<size_t>(count);
        }
        return true;
    }

    jstring makeJavaString(JNIEnv *env, const std::string &value)
    {
        return env->NewStringUTF(value.c_str());
    }
}

namespace manhunt2::android
{
    int duplicateSelectedIsoFd() noexcept
    {
        std::lock_guard<std::mutex> lock(g_isoMutex);
        if (g_isoFd < 0)
            return -1;
        return ::fcntl(g_isoFd, F_DUPFD_CLOEXEC, 0);
    }

    uint64_t selectedIsoSize() noexcept
    {
        std::lock_guard<std::mutex> lock(g_isoMutex);
        return g_isoFd >= 0 ? g_isoSize : 0u;
    }

    bool readSelectedIsoAt(uint64_t offset, void *destination, size_t size) noexcept
    {
        if (!destination && size != 0u)
            return false;

        std::lock_guard<std::mutex> lock(g_isoMutex);
        if (g_isoFd < 0 || offset > g_isoSize || size > g_isoSize - offset)
            return false;
        return preadExact(g_isoFd, offset, destination, size);
    }
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_manhunt2android_MainActivity_nativeAttachIso(
        JNIEnv *env, jclass, jint sourceFd, jlong expectedSize)
{
    if (sourceFd < 0)
        return makeJavaString(env, "El descriptor SAF recibido no es válido.");

    const int candidateFd = ::fcntl(sourceFd, F_DUPFD_CLOEXEC, 0);
    if (candidateFd < 0)
        return makeJavaString(env, "No se pudo duplicar el descriptor ISO (fcntl).");

    struct stat metadata{};
    if (::fstat(candidateFd, &metadata) != 0)
    {
        ::close(candidateFd);
        return makeJavaString(env, "No se pudo consultar el tamaño del archivo ISO (fstat).");
    }

    uint64_t imageSize = expectedSize > 0 ? static_cast<uint64_t>(expectedSize) : 0u;
    if (metadata.st_size > 0)
        imageSize = static_cast<uint64_t>(metadata.st_size);

    if (imageSize < 17u * kIsoSectorSize)
    {
        ::close(candidateFd);
        return makeJavaString(env, "La ISO es demasiado pequeña o Android no informa su tamaño.");
    }

    uint8_t pvd[kIsoSectorSize]{};
    if (!preadExact(candidateFd, kPrimaryVolumeDescriptorOffset, pvd, sizeof(pvd)))
    {
        ::close(candidateFd);
        return makeJavaString(env, "El proveedor SAF no permite lecturas aleatorias (pread) del archivo ISO.");
    }

    if (pvd[0] != 1u ||
        std::memcmp(pvd + 1u, "CD001", 5u) != 0 ||
        pvd[6] != 1u)
    {
        ::close(candidateFd);
        return makeJavaString(env, "El puente nativo leyó el sector 16, pero no encontró un descriptor ISO9660 válido.");
    }

    int previousFd = -1;
    {
        std::lock_guard<std::mutex> lock(g_isoMutex);
        previousFd = g_isoFd;
        g_isoFd = candidateFd;
        g_isoSize = imageSize;
    }
    if (previousFd >= 0)
        ::close(previousFd);

    return nullptr;
}

extern "C" JNIEXPORT jbyteArray JNICALL
Java_com_example_manhunt2android_MainActivity_nativeReadIso(
        JNIEnv *env, jclass, jlong offset, jint length)
{
    if (offset < 0 || length < 0 || static_cast<size_t>(length) > kMaxJniReadBytes)
        return nullptr;

    std::vector<uint8_t> bytes(static_cast<size_t>(length));
    if (!manhunt2::android::readSelectedIsoAt(
                static_cast<uint64_t>(offset), bytes.data(), bytes.size()))
        return nullptr;

    jbyteArray result = env->NewByteArray(length);
    if (!result)
        return nullptr;
    if (length > 0)
    {
        env->SetByteArrayRegion(result, 0, length,
                                reinterpret_cast<const jbyte *>(bytes.data()));
        if (env->ExceptionCheck())
            return nullptr;
    }
    return result;
}

extern "C" JNIEXPORT void JNICALL
Java_com_example_manhunt2android_MainActivity_nativeDetachIso(JNIEnv *, jclass)
{
    int previousFd = -1;
    {
        std::lock_guard<std::mutex> lock(g_isoMutex);
        previousFd = g_isoFd;
        g_isoFd = -1;
        g_isoSize = 0u;
    }
    if (previousFd >= 0)
        ::close(previousFd);
}
