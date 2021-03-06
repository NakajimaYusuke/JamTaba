#ifndef MAINCONTROLLERVST_H
#define MAINCONTROLLERVST_H

#include "MainController.h"
#include "NinjamController.h"
#include "audio/core/PluginDescriptor.h"
#include "NinjamControllerVST.h"
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class JamtabaPlugin;

class MainControllerVST : public Controller::MainController
{
public:
    MainControllerVST(const Persistence::Settings &settings, JamtabaPlugin *plugin);
    ~MainControllerVST();

    inline QString getJamtabaFlavor() const override
    {
        return "Vst Plugin";
    }

    QString getUserEnvironmentString() const;

    Audio::AudioDriver *createAudioDriver(const Persistence::Settings &settings);

    Controller::NinjamController *createNinjamController() override;

    inline NinjamControllerVST *getNinjamController() const override
    {
        return dynamic_cast<NinjamControllerVST *>(ninjamController.data());
    }

    void setCSS(const QString &css) override;

    int addInputTrackNode(Audio::LocalInputNode *inputTrackNode) override;

    void setSampleRate(int newSampleRate);

    inline int getSampleRate() const override
    {
        return sampleRate;
    }

    Midi::MidiDriver *createMidiDriver();

    inline void exit() //TODO remove this ??
    {
    }

    int getHostBpm() const;

    QString getHostName() const;

    void resizePluginEditor(int newWidth, int newHeight);

    Persistence::Preset loadPreset(const QString &name) override;

    inline Midi::MidiMessageBuffer pullMidiMessagesFromPlugins() override
    {
        static Midi::MidiMessageBuffer emptyBuffer(0);
        return emptyBuffer;
    }

protected:
    inline Midi::MidiMessageBuffer pullMidiMessagesFromDevices() override
    {
        static Midi::MidiMessageBuffer emptyBuffer(0);
        return emptyBuffer;
    }
private:
    int sampleRate;
    JamtabaPlugin *plugin;
};

#endif // MAINCONTROLLERVST_H
