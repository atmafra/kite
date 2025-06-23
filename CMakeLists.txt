cmake_minimum_required(VERSION 3.22)

project("KiteFX" VERSION 0.0.1 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# --- Manually find and include Linux GUI dependencies ---
# This is a workaround to ensure GTK and WebKit headers are found during compilation,
# as they are sometimes missed by the JUCE build system on certain Linux setups.
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-x11-3.0)
pkg_check_modules(WEBKIT REQUIRED webkit2gtk-4.1)
include_directories(SYSTEM ${GTK3_INCLUDE_DIRS} ${WEBKIT_INCLUDE_DIRS})

# # --- Fetch JUCE ---
# # This will download JUCE and make it available to our project.
# include(FetchContent)

# FetchContent_Declare(
#     JUCE
#     GIT_REPOSITORY https://github.com/juce-framework/JUCE.git
#     GIT_TAG        8.0.8
# )

# FetchContent_MakeAvailable(JUCE)
add_subdirectory(ThirdParty/JUCE)

# --- Add Source Directory ---
# This tells CMake to look in the Source/ directory for more build instructions.
add_subdirectory(Source)