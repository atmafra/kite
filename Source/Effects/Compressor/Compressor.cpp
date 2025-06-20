#include "Compressor.h"

Compressor::Compressor()
{
    // In a real implementation, you would get these values from plugin parameters.
    dspCompressor.setThreshold(-10.0f);
    dspCompressor.setRatio(4.0f);
    dspCompressor.setAttack(5.0f);
    dspCompressor.setRelease(100.0f);
}

void Compressor::prepare(const juce::dsp::ProcessSpec& spec)
{
    dspCompressor.prepare(spec);
}

void Compressor::process(juce::AudioBuffer<float>& buffer)
{
    juce::dsp::AudioBlock<float> block(buffer);
    juce::dsp::ProcessContextReplacing<float> context(block);
    dspCompressor.process(context);
}

void Compressor::reset()
{
    dspCompressor.reset();
}