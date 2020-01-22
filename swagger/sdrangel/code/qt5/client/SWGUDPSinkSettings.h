/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.13.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGUDPSinkSettings.h
 *
 * UDPSink
 */

#ifndef SWGUDPSinkSettings_H_
#define SWGUDPSinkSettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGUDPSinkSettings: public SWGObject {
public:
    SWGUDPSinkSettings();
    SWGUDPSinkSettings(QString* json);
    virtual ~SWGUDPSinkSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGUDPSinkSettings* fromJson(QString &jsonString) override;

    float getOutputSampleRate();
    void setOutputSampleRate(float output_sample_rate);

    qint32 getSampleFormat();
    void setSampleFormat(qint32 sample_format);

    qint64 getInputFrequencyOffset();
    void setInputFrequencyOffset(qint64 input_frequency_offset);

    float getRfBandwidth();
    void setRfBandwidth(float rf_bandwidth);

    qint32 getFmDeviation();
    void setFmDeviation(qint32 fm_deviation);

    qint32 getChannelMute();
    void setChannelMute(qint32 channel_mute);

    float getGain();
    void setGain(float gain);

    qint32 getSquelchDb();
    void setSquelchDb(qint32 squelch_db);

    qint32 getSquelchGate();
    void setSquelchGate(qint32 squelch_gate);

    qint32 getSquelchEnabled();
    void setSquelchEnabled(qint32 squelch_enabled);

    qint32 getAgc();
    void setAgc(qint32 agc);

    qint32 getAudioActive();
    void setAudioActive(qint32 audio_active);

    qint32 getAudioStereo();
    void setAudioStereo(qint32 audio_stereo);

    qint32 getVolume();
    void setVolume(qint32 volume);

    QString* getUdpAddress();
    void setUdpAddress(QString* udp_address);

    qint32 getUdpPort();
    void setUdpPort(qint32 udp_port);

    qint32 getAudioPort();
    void setAudioPort(qint32 audio_port);

    qint32 getRgbColor();
    void setRgbColor(qint32 rgb_color);

    QString* getTitle();
    void setTitle(QString* title);

    qint32 getStreamIndex();
    void setStreamIndex(qint32 stream_index);

    qint32 getUseReverseApi();
    void setUseReverseApi(qint32 use_reverse_api);

    QString* getReverseApiAddress();
    void setReverseApiAddress(QString* reverse_api_address);

    qint32 getReverseApiPort();
    void setReverseApiPort(qint32 reverse_api_port);

    qint32 getReverseApiDeviceIndex();
    void setReverseApiDeviceIndex(qint32 reverse_api_device_index);

    qint32 getReverseApiChannelIndex();
    void setReverseApiChannelIndex(qint32 reverse_api_channel_index);


    virtual bool isSet() override;

private:
    float output_sample_rate;
    bool m_output_sample_rate_isSet;

    qint32 sample_format;
    bool m_sample_format_isSet;

    qint64 input_frequency_offset;
    bool m_input_frequency_offset_isSet;

    float rf_bandwidth;
    bool m_rf_bandwidth_isSet;

    qint32 fm_deviation;
    bool m_fm_deviation_isSet;

    qint32 channel_mute;
    bool m_channel_mute_isSet;

    float gain;
    bool m_gain_isSet;

    qint32 squelch_db;
    bool m_squelch_db_isSet;

    qint32 squelch_gate;
    bool m_squelch_gate_isSet;

    qint32 squelch_enabled;
    bool m_squelch_enabled_isSet;

    qint32 agc;
    bool m_agc_isSet;

    qint32 audio_active;
    bool m_audio_active_isSet;

    qint32 audio_stereo;
    bool m_audio_stereo_isSet;

    qint32 volume;
    bool m_volume_isSet;

    QString* udp_address;
    bool m_udp_address_isSet;

    qint32 udp_port;
    bool m_udp_port_isSet;

    qint32 audio_port;
    bool m_audio_port_isSet;

    qint32 rgb_color;
    bool m_rgb_color_isSet;

    QString* title;
    bool m_title_isSet;

    qint32 stream_index;
    bool m_stream_index_isSet;

    qint32 use_reverse_api;
    bool m_use_reverse_api_isSet;

    QString* reverse_api_address;
    bool m_reverse_api_address_isSet;

    qint32 reverse_api_port;
    bool m_reverse_api_port_isSet;

    qint32 reverse_api_device_index;
    bool m_reverse_api_device_index_isSet;

    qint32 reverse_api_channel_index;
    bool m_reverse_api_channel_index_isSet;

};

}

#endif /* SWGUDPSinkSettings_H_ */
