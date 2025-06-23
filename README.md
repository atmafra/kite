# KiteFX - Multi-Effects Guitar Plugin

A multi-effects audio plugin for guitar, built in C++ with the JUCE framework.

## Effects

- Compressor
- Overdrive
- Modulation
- Delay
- Reverb

## Prerequisites

### Linux (Debian/Ubuntu)

Before building, you need to install `cmake` and the required development libraries for the JUCE framework. You can install them all with the following command:

```bash
sudo apt-get update && sudo apt-get install build-essential cmake pkg-config libgtk-3-dev libasound2-dev libjack-jackd2-dev ladspa-sdk libcurl4-openssl-dev libx11-dev libxcomposite-dev libxcursor-dev libxext-dev libxinerama-dev libxrandr-dev libxrender-dev libfreetype6-dev libwebkit2gtk-4.1-dev
```

## Compiling

Once the prerequisites are installed, run the following commands from the project root to build the project:

```bash
cmake -B build
cmake --build build
```
