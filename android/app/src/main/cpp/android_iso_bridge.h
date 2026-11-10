#pragma once

#include <cstddef>
#include <cstdint>

namespace manhunt2::android
{
    // Returns a caller-owned duplicate of the selected SAF ISO descriptor.
    // The caller must close the returned descriptor. Returns -1 when no ISO is attached.
    [[nodiscard]] int duplicateSelectedIsoFd() noexcept;

    [[nodiscard]] uint64_t selectedIsoSize() noexcept;

    // Thread-safe positional read from the currently attached ISO.
    [[nodiscard]] bool readSelectedIsoAt(uint64_t offset,
                                         void *destination,
                                         size_t size) noexcept;
}
