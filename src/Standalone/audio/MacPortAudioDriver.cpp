#include "PortAudioDriver.h"
#include "pa_mac_core.h"
#include "../log/Logging.h"

namespace Audio {
PortAudioDriver::PortAudioDriver(Controller::MainController *mainController, int deviceIndex,
                                 int firstInIndex, int lastInIndex, int firstOutIndex,
                                 int lastOutIndex, int sampleRate, int bufferSize) :
    AudioDriver(mainController)
{

    Q_UNUSED(firstInIndex)
    Q_UNUSED(firstOutIndex)
    Q_UNUSED(lastInIndex)
    Q_UNUSED(lastOutIndex)
    Q_UNUSED(deviceIndex)
    // initialize portaudio using default devices, mono input and try estereo output if possible
    PaError error = Pa_Initialize();
    if (error == paNoError) {
        audioDeviceIndex = Pa_GetDefaultOutputDevice();
        globalInputRange = ChannelRange(0, getMaxInputs());
        globalOutputRange = ChannelRange(0, 2);// 2 channels for output

        int maxOutputs = getMaxOutputs();
        if (maxOutputs > 1)
            globalOutputRange.setToStereo();
        if(!initPortAudio(sampleRate, bufferSize)){
            qCCritical(jtAudio) << "ERROR initializing portaudio:" << Pa_GetErrorText(error);
            audioDeviceIndex = paNoDevice;
        }
    } else {
        qCCritical(jtAudio) << "ERROR initializing portaudio:" << Pa_GetErrorText(error);
        audioDeviceIndex = paNoDevice;
    }
}

QList<int> PortAudioDriver::getValidBufferSizes(int deviceIndex) const
{
    QList<int> buffersSize;
    long maxBufferSize;
    long minBufferSize;
    PaError result = PaMacCore_GetBufferSizeRange(deviceIndex, &minBufferSize, &maxBufferSize);
    if (result != paNoError) {
        buffersSize.append(256);
        return buffersSize;// return 256 as the only possible value
    }
    for (long size = minBufferSize; size <= maxBufferSize; size *= 2)
        buffersSize.append(size);
    return buffersSize;
}

QString PortAudioDriver::getOutputChannelName(const unsigned int index) const
{
    return QString(PaMacCore_GetChannelName(audioDeviceIndex, index, false));
}

QString PortAudioDriver::getInputChannelName(const unsigned int index) const
{
    return QString(PaMacCore_GetChannelName(audioDeviceIndex, index, true));
}

void PortAudioDriver::configureHostSpecificInputParameters(PaStreamParameters &inputParameters)
{
    Q_UNUSED(inputParameters)
    // qCDebug(portaudio) << "using MAC scpecific stream infos for inputs";
    // PaMacCoreStreamInfo streamInfo;
    // PaMacCore_SetupStreamInfo(&streamInfo, paMacCorePro);
    // inputParams.hostApiSpecificStreamInfo  = &streamInfo;
}

void PortAudioDriver::configureHostSpecificOutputParameters(PaStreamParameters &outputParameters)
{
    Q_UNUSED(outputParameters)
    // qCDebug(portaudio) << "using MAC scpecific stream infos for output";
    // PaMacCoreStreamInfo outStreamInfo;
    // PaMacCore_SetupStreamInfo(&outStreamInfo, paMacCorePro);
    // outputParams.hostApiSpecificStreamInfo = &outStreamInfo;
}

void PortAudioDriver::releaseHostSpecificParameters(const PaStreamParameters &inputParameters,
                                                    const PaStreamParameters &outputParameters)
{
    Q_UNUSED(inputParameters)
    Q_UNUSED(outputParameters)
}

bool PortAudioDriver::hasControlPanel() const
{
    return false;
}

void PortAudioDriver::openControlPanel(void *mainWindowHandle)
{
    Q_UNUSED(mainWindowHandle)
}

void PortAudioDriver::preInitializePortAudioStream(PaStream *stream)
{
    Q_UNUSED(stream)
}


}// namespace
