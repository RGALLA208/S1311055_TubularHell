/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class SpectralDistortionAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    SpectralDistortionAudioProcessorEditor (SpectralDistortionAudioProcessor&);
    ~SpectralDistortionAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    SpectralDistortionAudioProcessor& processor;
    ScopedPointer<Slider> inputGainKnob;
    ScopedPointer<Slider> rangeKnob;
    ScopedPointer<Slider> wetKnob;
    ScopedPointer<Slider> outGainKnob;
   // ScopedPointer<ComboBox> DistortionType;
    
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> inputGainAttatchment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> rangeAttatchment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> wetAttatchment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> outGainAttatchment;
   // ScopedPointer<AudioProcessorValueTreeState::ComboBoxAttachment> DistortionAttatchment;
    

   // Slider inGainDial;
    //Slider driveDial;
    ComboBox distortionSelect;
  



    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SpectralDistortionAudioProcessorEditor)
};
