cmake_minimum_required(VERSION 3.22)

project("KiteFX" VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# --- Fetch JUCE ---
# This will download JUCE and make it available to our project.
include(FetchContent)

FetchContent_Declare(
    JUCE
    GIT_REPOSITORY https://github.com/juce-framework/JUCE.git
    GIT_TAG        origin/master # Or a specific version tag like 7.0.9
)

FetchContent_MakeAvailable(JUCE)

# --- Add Source Directory ---
# This tells CMake to look in the Source/ directory for more build instructions.
add_subdirectory(Source)