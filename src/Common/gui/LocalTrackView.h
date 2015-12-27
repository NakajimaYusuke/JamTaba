#ifndef LOCAL_TRACK_VIEW_H
#define LOCAL_TRACK_VIEW_H

#include "BaseTrackView.h"
#include <QWidget>
#include <QTimer>
#include "PeakMeter.h"

class QMenu;
class FxPanel;
class QFrame;
class QPushButton;
class QLabel;
class QSpacerItem;

namespace Audio {
class Plugin;
class LocalInputAudioNode;
}

namespace Controller {
class MainController;
}

class LocalTrackView : public BaseTrackView
{
    Q_OBJECT
public:
    LocalTrackView(Controller::MainController *mainController, int channelIndex, float initialGain,
                   BoostValue boostValue, float initialPan, bool muted);
    LocalTrackView(Controller::MainController *mainController, int channelIndex);
    ~LocalTrackView();

    void addPlugin(Audio::Plugin *plugin, bool bypassed = false);

    void closeAllPlugins();

    void refreshInputSelectionName();

    void detachMainController();

    void removeIputSelectionControls();
    void removeFxPanel();

    inline int getInputIndex() const
    {
        return getTrackID();
    }

    Audio::LocalInputAudioNode *getInputNode() const;
    QList<const Audio::Plugin *> getInsertedPlugins() const;

    virtual void setUnlightStatus(bool unlighted);

    void setPeakMetersOnlyMode(bool peakMetersOnly, bool runningInMiniMode);
    void togglePeakMetersOnlyMode(bool runninsInMiniMode);

    QSize sizeHint() const;

    void updateGuiElements();// overriding to show midi activity

    // PRESETS NEED THAT TOO
    inline FxPanel *getFxPanel()
    {
        return fxPanel;
    }

    void resetFXPanel();
    void loadFXPanel();
    void mute(bool b);
    void solo(bool b);
    void initializeBoostButtons(BoostValue boostValue);

public slots:
    void setToNoInput();

private:
    FxPanel *fxPanel;
    QSpacerItem *fxSpacer;
    FxPanel *createFxPanel();
    QWidget *createInputPanel();
    QPushButton *createInputSelectionButton(QWidget *parent);
    QLabel *createInputTypeIconLabel(QWidget *parent);

    QMenu *createMonoInputsMenu(QMenu *parentMenu);
    QMenu *createStereoInputsMenu(QMenu *parentMenu);
    QMenu *createMidiInputsMenu(QMenu *parentMenu);

    QPushButton *inputSelectionButton;
    QLabel *inputTypeIconLabel;

    QWidget *inputPanel;

    PeakMeter *midiPeakMeter;// show midi activity

    void setMidiPeakMeterVisibility(bool visible);

    static const QString MIDI_ICON;
    static const QString MONO_ICON;
    static const QString STEREO_ICON;
    static const QString NO_INPUT_ICON;

    QString getInputChannelNameOnly(int inputIndex);// return the input channel name withou the number/index

    Audio::LocalInputAudioNode *inputNode;

    bool inputIsUsedByThisTrack(int inputIndexInAudioDevice) const;

    void init(int channelIndex, float initialGain, BoostValue boostValue, float initialPan,
              bool muted);

    bool peakMetersOnly;

    void deleteWidget(QWidget *widget);

private slots:
    void showInputSelectionMenu();// build and show the input selection menu

    void setToMono(QAction *action);
    void setToStereo(QAction *action);
    void setToMidi(QAction *action);
};

#endif