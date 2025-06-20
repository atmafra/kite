#pragma once

#include <JuceHeader.h>

/**
 * @class EffectBase
 * @brief An abstract base class for all audio effect modules.
 *
 * This pure virtual class defines the common interface that every effect
 * in the plugin must implement. This allows the main processor to manage
 * a chain of effects generically.
 */
class EffectBase
{
public:
    virtual ~EffectBase() = default;

    // Called before processing starts to prepare the effect with sample rate, buffer size, etc.
    virtual void prepare(const juce::dsp::ProcessSpec& spec) = 0;

    // The main audio processing callback for the effect.
    virtual void process(juce::AudioBuffer<float>& buffer) = 0;

    // Called to reset the internal state of the effect.
    virtual void reset() = 0;
};