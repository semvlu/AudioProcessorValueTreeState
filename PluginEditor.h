/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class APVTSAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    APVTSAudioProcessorEditor (APVTSAudioProcessor&);
    ~APVTSAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    
    // slider
    juce::Slider gainSlider;
    // connect the audio parameter to the slider
    std::unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment> gainSliderAttachment;

    APVTSAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (APVTSAudioProcessorEditor)
};
