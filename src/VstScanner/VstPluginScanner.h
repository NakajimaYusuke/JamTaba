#ifndef VSTPLUGINSCANNER_H
#define VSTPLUGINSCANNER_H

#include <QObject>
#include <QFileInfo>
#include <QProcess>
#include "audio/core/PluginDescriptor.h"

class VstPluginScanner : public QObject
{
    Q_OBJECT
public:
    VstPluginScanner();
    void start(int argc, char *argv[]);
private:
    QStringList foldersToScan;
    QStringList skipList; //contain blackListed and cached plugins

    void initialize(int argc, char *argv[]);
    void scan();

    Audio::PluginDescriptor getPluginDescriptor(const QFileInfo &pluginFile);

    QProcess process;
    void writeToProcessOutput(const QString &);
};

#endif // VSTPLUGINSCANNER_H
