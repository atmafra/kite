# This list will grow as you add more files to the root of the Source/ directory.
set(PLUGIN_SOURCE_FILES
    PluginProcessor.cpp
    PluginProcessor.h
    PluginEditor.cpp
    PluginEditor.h
)

# This list will contain all your effect implementation files.
set(EFFECT_FILES
    Effects/Compressor/Compressor.cpp
)

# This creates the plugin target.
juce_add_plugin("KiteFX"
    SOURCES ${PLUGIN_SOURCE_FILES} ${EFFECT_FILES}
)