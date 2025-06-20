#pragma once

#include "../EffectBase.h"

class Compressor : public EffectBase
{
public:
    Compressor();

    void prepare(const juce::dsp::ProcessSpec& spec) override;
    void process(juce::AudioBuffer<float>& buffer) override;
    void reset() override;

private:
    // We will use JUCE's built-in DSP module for the compressor.
    juce::dsp::Compressor<float> dspCompressor;

    // You would add parameters here, e.g., for threshold, ratio, attack, release.
    // std::atomic<float>* thresholdParam = nullptr;
};