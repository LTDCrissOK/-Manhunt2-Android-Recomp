plugins {
    alias(libs.plugins.android.application)
}

val ps2xBootElf = providers.gradleProperty("ps2xBootElf")
    .orElse("/storage/emulated/0/Android/data/com.example.manhunt2android/files/SLES_548.19")
    .get()

android {
    namespace = "com.example.manhunt2android"
    compileSdk {
        version = release(36)
    }
    ndkVersion = "28.2.13676358"

    defaultConfig {
        applicationId = "com.example.manhunt2android"
        minSdk = 28
        targetSdk = 34
        versionCode = 2
        versionName = "0.1.1"

        ndk {
            abiFilters += setOf("armeabi-v7a", "arm64-v8a")
        }

        externalNativeBuild {
            cmake {
                cppFlags += "-std=c++20"
                arguments += listOf(
                    "-DPS2X_BUILD_RECOMP=OFF",
                    "-DPS2X_BUILD_ANALYZER=OFF",
                    "-DPS2X_BUILD_TEST=OFF",
                    "-DPS2X_BUILD_STUDIO=OFF",
                    "-DPS2X_ENABLE_DEBUG_UI=OFF",
                    "-DPS2X_ENABLE_FFMPEG=OFF",
                    "-DPS2X_ENABLE_SCCACHE=OFF",
                    "-DPS2X_ENABLE_RUNNER_UNITY_BUILD=ON",
                    "-DPS2X_RUNNER_UNITY_BUILD_BATCH_SIZE=32",
                    "-DANDROID_CPP_FEATURES=rtti exceptions",
                    "-DPS2X_DEFAULT_BOOT_ELF=${ps2xBootElf}"
                )
                targets += "ps2EntryRunner"
            }
        }

        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
    }

    buildTypes {
        debug {
            isJniDebuggable = true
        }
        release {
            isMinifyEnabled = false
            signingConfig = signingConfigs.getByName("debug")
        }
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_11
        targetCompatibility = JavaVersion.VERSION_11
    }

    externalNativeBuild {
        cmake {
            path = file("src/main/cpp/CMakeLists.txt")
            version = "3.22.1"
        }
    }
}
