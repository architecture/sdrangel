/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.8.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGXtrxOutputSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGXtrxOutputSettings::SWGXtrxOutputSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGXtrxOutputSettings::SWGXtrxOutputSettings() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    dev_sample_rate = 0;
    m_dev_sample_rate_isSet = false;
    log2_hard_interp = 0;
    m_log2_hard_interp_isSet = false;
    log2_soft_interp = 0;
    m_log2_soft_interp_isSet = false;
    lpf_bw = 0;
    m_lpf_bw_isSet = false;
    gain = 0;
    m_gain_isSet = false;
    nco_enable = 0;
    m_nco_enable_isSet = false;
    nco_frequency = 0;
    m_nco_frequency_isSet = false;
    antenna_path = 0;
    m_antenna_path_isSet = false;
    ext_clock = 0;
    m_ext_clock_isSet = false;
    ext_clock_freq = 0;
    m_ext_clock_freq_isSet = false;
    pwrmode = 0;
    m_pwrmode_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
}

SWGXtrxOutputSettings::~SWGXtrxOutputSettings() {
    this->cleanup();
}

void
SWGXtrxOutputSettings::init() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    dev_sample_rate = 0;
    m_dev_sample_rate_isSet = false;
    log2_hard_interp = 0;
    m_log2_hard_interp_isSet = false;
    log2_soft_interp = 0;
    m_log2_soft_interp_isSet = false;
    lpf_bw = 0;
    m_lpf_bw_isSet = false;
    gain = 0;
    m_gain_isSet = false;
    nco_enable = 0;
    m_nco_enable_isSet = false;
    nco_frequency = 0;
    m_nco_frequency_isSet = false;
    antenna_path = 0;
    m_antenna_path_isSet = false;
    ext_clock = 0;
    m_ext_clock_isSet = false;
    ext_clock_freq = 0;
    m_ext_clock_freq_isSet = false;
    pwrmode = 0;
    m_pwrmode_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
}

void
SWGXtrxOutputSettings::cleanup() {













    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }


}

SWGXtrxOutputSettings*
SWGXtrxOutputSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGXtrxOutputSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&dev_sample_rate, pJson["devSampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_hard_interp, pJson["log2HardInterp"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_soft_interp, pJson["log2SoftInterp"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lpf_bw, pJson["lpfBW"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain, pJson["gain"], "qint32", "");
    
    ::SWGSDRangel::setValue(&nco_enable, pJson["ncoEnable"], "qint32", "");
    
    ::SWGSDRangel::setValue(&nco_frequency, pJson["ncoFrequency"], "qint32", "");
    
    ::SWGSDRangel::setValue(&antenna_path, pJson["antennaPath"], "qint32", "");
    
    ::SWGSDRangel::setValue(&ext_clock, pJson["extClock"], "qint32", "");
    
    ::SWGSDRangel::setValue(&ext_clock_freq, pJson["extClockFreq"], "qint32", "");
    
    ::SWGSDRangel::setValue(&pwrmode, pJson["pwrmode"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
}

QString
SWGXtrxOutputSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGXtrxOutputSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(m_dev_sample_rate_isSet){
        obj->insert("devSampleRate", QJsonValue(dev_sample_rate));
    }
    if(m_log2_hard_interp_isSet){
        obj->insert("log2HardInterp", QJsonValue(log2_hard_interp));
    }
    if(m_log2_soft_interp_isSet){
        obj->insert("log2SoftInterp", QJsonValue(log2_soft_interp));
    }
    if(m_lpf_bw_isSet){
        obj->insert("lpfBW", QJsonValue(lpf_bw));
    }
    if(m_gain_isSet){
        obj->insert("gain", QJsonValue(gain));
    }
    if(m_nco_enable_isSet){
        obj->insert("ncoEnable", QJsonValue(nco_enable));
    }
    if(m_nco_frequency_isSet){
        obj->insert("ncoFrequency", QJsonValue(nco_frequency));
    }
    if(m_antenna_path_isSet){
        obj->insert("antennaPath", QJsonValue(antenna_path));
    }
    if(m_ext_clock_isSet){
        obj->insert("extClock", QJsonValue(ext_clock));
    }
    if(m_ext_clock_freq_isSet){
        obj->insert("extClockFreq", QJsonValue(ext_clock_freq));
    }
    if(m_pwrmode_isSet){
        obj->insert("pwrmode", QJsonValue(pwrmode));
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_device_index_isSet){
        obj->insert("reverseAPIDeviceIndex", QJsonValue(reverse_api_device_index));
    }

    return obj;
}

qint64
SWGXtrxOutputSettings::getCenterFrequency() {
    return center_frequency;
}
void
SWGXtrxOutputSettings::setCenterFrequency(qint64 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

qint32
SWGXtrxOutputSettings::getDevSampleRate() {
    return dev_sample_rate;
}
void
SWGXtrxOutputSettings::setDevSampleRate(qint32 dev_sample_rate) {
    this->dev_sample_rate = dev_sample_rate;
    this->m_dev_sample_rate_isSet = true;
}

qint32
SWGXtrxOutputSettings::getLog2HardInterp() {
    return log2_hard_interp;
}
void
SWGXtrxOutputSettings::setLog2HardInterp(qint32 log2_hard_interp) {
    this->log2_hard_interp = log2_hard_interp;
    this->m_log2_hard_interp_isSet = true;
}

qint32
SWGXtrxOutputSettings::getLog2SoftInterp() {
    return log2_soft_interp;
}
void
SWGXtrxOutputSettings::setLog2SoftInterp(qint32 log2_soft_interp) {
    this->log2_soft_interp = log2_soft_interp;
    this->m_log2_soft_interp_isSet = true;
}

qint32
SWGXtrxOutputSettings::getLpfBw() {
    return lpf_bw;
}
void
SWGXtrxOutputSettings::setLpfBw(qint32 lpf_bw) {
    this->lpf_bw = lpf_bw;
    this->m_lpf_bw_isSet = true;
}

qint32
SWGXtrxOutputSettings::getGain() {
    return gain;
}
void
SWGXtrxOutputSettings::setGain(qint32 gain) {
    this->gain = gain;
    this->m_gain_isSet = true;
}

qint32
SWGXtrxOutputSettings::getNcoEnable() {
    return nco_enable;
}
void
SWGXtrxOutputSettings::setNcoEnable(qint32 nco_enable) {
    this->nco_enable = nco_enable;
    this->m_nco_enable_isSet = true;
}

qint32
SWGXtrxOutputSettings::getNcoFrequency() {
    return nco_frequency;
}
void
SWGXtrxOutputSettings::setNcoFrequency(qint32 nco_frequency) {
    this->nco_frequency = nco_frequency;
    this->m_nco_frequency_isSet = true;
}

qint32
SWGXtrxOutputSettings::getAntennaPath() {
    return antenna_path;
}
void
SWGXtrxOutputSettings::setAntennaPath(qint32 antenna_path) {
    this->antenna_path = antenna_path;
    this->m_antenna_path_isSet = true;
}

qint32
SWGXtrxOutputSettings::getExtClock() {
    return ext_clock;
}
void
SWGXtrxOutputSettings::setExtClock(qint32 ext_clock) {
    this->ext_clock = ext_clock;
    this->m_ext_clock_isSet = true;
}

qint32
SWGXtrxOutputSettings::getExtClockFreq() {
    return ext_clock_freq;
}
void
SWGXtrxOutputSettings::setExtClockFreq(qint32 ext_clock_freq) {
    this->ext_clock_freq = ext_clock_freq;
    this->m_ext_clock_freq_isSet = true;
}

qint32
SWGXtrxOutputSettings::getPwrmode() {
    return pwrmode;
}
void
SWGXtrxOutputSettings::setPwrmode(qint32 pwrmode) {
    this->pwrmode = pwrmode;
    this->m_pwrmode_isSet = true;
}

qint32
SWGXtrxOutputSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGXtrxOutputSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGXtrxOutputSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGXtrxOutputSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGXtrxOutputSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGXtrxOutputSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGXtrxOutputSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGXtrxOutputSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}


bool
SWGXtrxOutputSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_center_frequency_isSet){ isObjectUpdated = true; break;}
        if(m_dev_sample_rate_isSet){ isObjectUpdated = true; break;}
        if(m_log2_hard_interp_isSet){ isObjectUpdated = true; break;}
        if(m_log2_soft_interp_isSet){ isObjectUpdated = true; break;}
        if(m_lpf_bw_isSet){ isObjectUpdated = true; break;}
        if(m_gain_isSet){ isObjectUpdated = true; break;}
        if(m_nco_enable_isSet){ isObjectUpdated = true; break;}
        if(m_nco_frequency_isSet){ isObjectUpdated = true; break;}
        if(m_antenna_path_isSet){ isObjectUpdated = true; break;}
        if(m_ext_clock_isSet){ isObjectUpdated = true; break;}
        if(m_ext_clock_freq_isSet){ isObjectUpdated = true; break;}
        if(m_pwrmode_isSet){ isObjectUpdated = true; break;}
        if(m_use_reverse_api_isSet){ isObjectUpdated = true; break;}
        if(reverse_api_address != nullptr && *reverse_api_address != QString("")){ isObjectUpdated = true; break;}
        if(m_reverse_api_port_isSet){ isObjectUpdated = true; break;}
        if(m_reverse_api_device_index_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

