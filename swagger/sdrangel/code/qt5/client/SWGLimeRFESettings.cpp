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


#include "SWGLimeRFESettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGLimeRFESettings::SWGLimeRFESettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGLimeRFESettings::SWGLimeRFESettings() {
    device_path = nullptr;
    m_device_path_isSet = false;
    rx_channels = 0;
    m_rx_channels_isSet = false;
    rx_wideband_channel = 0;
    m_rx_wideband_channel_isSet = false;
    rx_ham_channel = 0;
    m_rx_ham_channel_isSet = false;
    rx_cellular_channel = 0;
    m_rx_cellular_channel_isSet = false;
    rx_port = 0;
    m_rx_port_isSet = false;
    attenuation_factor = 0;
    m_attenuation_factor_isSet = false;
    amfm_notch = 0;
    m_amfm_notch_isSet = false;
    tx_channels = 0;
    m_tx_channels_isSet = false;
    tx_wideband_channel = 0;
    m_tx_wideband_channel_isSet = false;
    tx_ham_channel = 0;
    m_tx_ham_channel_isSet = false;
    tx_cellular_channel = 0;
    m_tx_cellular_channel_isSet = false;
    tx_port = 0;
    m_tx_port_isSet = false;
    swr_enable = 0;
    m_swr_enable_isSet = false;
    swr_source = 0;
    m_swr_source_isSet = false;
    rx_on = 0;
    m_rx_on_isSet = false;
    tx_on = 0;
    m_tx_on_isSet = false;
}

SWGLimeRFESettings::~SWGLimeRFESettings() {
    this->cleanup();
}

void
SWGLimeRFESettings::init() {
    device_path = new QString("");
    m_device_path_isSet = false;
    rx_channels = 0;
    m_rx_channels_isSet = false;
    rx_wideband_channel = 0;
    m_rx_wideband_channel_isSet = false;
    rx_ham_channel = 0;
    m_rx_ham_channel_isSet = false;
    rx_cellular_channel = 0;
    m_rx_cellular_channel_isSet = false;
    rx_port = 0;
    m_rx_port_isSet = false;
    attenuation_factor = 0;
    m_attenuation_factor_isSet = false;
    amfm_notch = 0;
    m_amfm_notch_isSet = false;
    tx_channels = 0;
    m_tx_channels_isSet = false;
    tx_wideband_channel = 0;
    m_tx_wideband_channel_isSet = false;
    tx_ham_channel = 0;
    m_tx_ham_channel_isSet = false;
    tx_cellular_channel = 0;
    m_tx_cellular_channel_isSet = false;
    tx_port = 0;
    m_tx_port_isSet = false;
    swr_enable = 0;
    m_swr_enable_isSet = false;
    swr_source = 0;
    m_swr_source_isSet = false;
    rx_on = 0;
    m_rx_on_isSet = false;
    tx_on = 0;
    m_tx_on_isSet = false;
}

void
SWGLimeRFESettings::cleanup() {
    if(device_path != nullptr) { 
        delete device_path;
    }
















}

SWGLimeRFESettings*
SWGLimeRFESettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGLimeRFESettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&device_path, pJson["devicePath"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&rx_channels, pJson["rxChannels"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rx_wideband_channel, pJson["rxWidebandChannel"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rx_ham_channel, pJson["rxHAMChannel"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rx_cellular_channel, pJson["rxCellularChannel"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rx_port, pJson["rxPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&attenuation_factor, pJson["attenuationFactor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&amfm_notch, pJson["amfmNotch"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tx_channels, pJson["txChannels"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tx_wideband_channel, pJson["txWidebandChannel"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tx_ham_channel, pJson["txHAMChannel"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tx_cellular_channel, pJson["txCellularChannel"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tx_port, pJson["txPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&swr_enable, pJson["swrEnable"], "qint32", "");
    
    ::SWGSDRangel::setValue(&swr_source, pJson["swrSource"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rx_on, pJson["rxOn"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tx_on, pJson["txOn"], "qint32", "");
    
}

QString
SWGLimeRFESettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGLimeRFESettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(device_path != nullptr && *device_path != QString("")){
        toJsonValue(QString("devicePath"), device_path, obj, QString("QString"));
    }
    if(m_rx_channels_isSet){
        obj->insert("rxChannels", QJsonValue(rx_channels));
    }
    if(m_rx_wideband_channel_isSet){
        obj->insert("rxWidebandChannel", QJsonValue(rx_wideband_channel));
    }
    if(m_rx_ham_channel_isSet){
        obj->insert("rxHAMChannel", QJsonValue(rx_ham_channel));
    }
    if(m_rx_cellular_channel_isSet){
        obj->insert("rxCellularChannel", QJsonValue(rx_cellular_channel));
    }
    if(m_rx_port_isSet){
        obj->insert("rxPort", QJsonValue(rx_port));
    }
    if(m_attenuation_factor_isSet){
        obj->insert("attenuationFactor", QJsonValue(attenuation_factor));
    }
    if(m_amfm_notch_isSet){
        obj->insert("amfmNotch", QJsonValue(amfm_notch));
    }
    if(m_tx_channels_isSet){
        obj->insert("txChannels", QJsonValue(tx_channels));
    }
    if(m_tx_wideband_channel_isSet){
        obj->insert("txWidebandChannel", QJsonValue(tx_wideband_channel));
    }
    if(m_tx_ham_channel_isSet){
        obj->insert("txHAMChannel", QJsonValue(tx_ham_channel));
    }
    if(m_tx_cellular_channel_isSet){
        obj->insert("txCellularChannel", QJsonValue(tx_cellular_channel));
    }
    if(m_tx_port_isSet){
        obj->insert("txPort", QJsonValue(tx_port));
    }
    if(m_swr_enable_isSet){
        obj->insert("swrEnable", QJsonValue(swr_enable));
    }
    if(m_swr_source_isSet){
        obj->insert("swrSource", QJsonValue(swr_source));
    }
    if(m_rx_on_isSet){
        obj->insert("rxOn", QJsonValue(rx_on));
    }
    if(m_tx_on_isSet){
        obj->insert("txOn", QJsonValue(tx_on));
    }

    return obj;
}

QString*
SWGLimeRFESettings::getDevicePath() {
    return device_path;
}
void
SWGLimeRFESettings::setDevicePath(QString* device_path) {
    this->device_path = device_path;
    this->m_device_path_isSet = true;
}

qint32
SWGLimeRFESettings::getRxChannels() {
    return rx_channels;
}
void
SWGLimeRFESettings::setRxChannels(qint32 rx_channels) {
    this->rx_channels = rx_channels;
    this->m_rx_channels_isSet = true;
}

qint32
SWGLimeRFESettings::getRxWidebandChannel() {
    return rx_wideband_channel;
}
void
SWGLimeRFESettings::setRxWidebandChannel(qint32 rx_wideband_channel) {
    this->rx_wideband_channel = rx_wideband_channel;
    this->m_rx_wideband_channel_isSet = true;
}

qint32
SWGLimeRFESettings::getRxHamChannel() {
    return rx_ham_channel;
}
void
SWGLimeRFESettings::setRxHamChannel(qint32 rx_ham_channel) {
    this->rx_ham_channel = rx_ham_channel;
    this->m_rx_ham_channel_isSet = true;
}

qint32
SWGLimeRFESettings::getRxCellularChannel() {
    return rx_cellular_channel;
}
void
SWGLimeRFESettings::setRxCellularChannel(qint32 rx_cellular_channel) {
    this->rx_cellular_channel = rx_cellular_channel;
    this->m_rx_cellular_channel_isSet = true;
}

qint32
SWGLimeRFESettings::getRxPort() {
    return rx_port;
}
void
SWGLimeRFESettings::setRxPort(qint32 rx_port) {
    this->rx_port = rx_port;
    this->m_rx_port_isSet = true;
}

qint32
SWGLimeRFESettings::getAttenuationFactor() {
    return attenuation_factor;
}
void
SWGLimeRFESettings::setAttenuationFactor(qint32 attenuation_factor) {
    this->attenuation_factor = attenuation_factor;
    this->m_attenuation_factor_isSet = true;
}

qint32
SWGLimeRFESettings::getAmfmNotch() {
    return amfm_notch;
}
void
SWGLimeRFESettings::setAmfmNotch(qint32 amfm_notch) {
    this->amfm_notch = amfm_notch;
    this->m_amfm_notch_isSet = true;
}

qint32
SWGLimeRFESettings::getTxChannels() {
    return tx_channels;
}
void
SWGLimeRFESettings::setTxChannels(qint32 tx_channels) {
    this->tx_channels = tx_channels;
    this->m_tx_channels_isSet = true;
}

qint32
SWGLimeRFESettings::getTxWidebandChannel() {
    return tx_wideband_channel;
}
void
SWGLimeRFESettings::setTxWidebandChannel(qint32 tx_wideband_channel) {
    this->tx_wideband_channel = tx_wideband_channel;
    this->m_tx_wideband_channel_isSet = true;
}

qint32
SWGLimeRFESettings::getTxHamChannel() {
    return tx_ham_channel;
}
void
SWGLimeRFESettings::setTxHamChannel(qint32 tx_ham_channel) {
    this->tx_ham_channel = tx_ham_channel;
    this->m_tx_ham_channel_isSet = true;
}

qint32
SWGLimeRFESettings::getTxCellularChannel() {
    return tx_cellular_channel;
}
void
SWGLimeRFESettings::setTxCellularChannel(qint32 tx_cellular_channel) {
    this->tx_cellular_channel = tx_cellular_channel;
    this->m_tx_cellular_channel_isSet = true;
}

qint32
SWGLimeRFESettings::getTxPort() {
    return tx_port;
}
void
SWGLimeRFESettings::setTxPort(qint32 tx_port) {
    this->tx_port = tx_port;
    this->m_tx_port_isSet = true;
}

qint32
SWGLimeRFESettings::getSwrEnable() {
    return swr_enable;
}
void
SWGLimeRFESettings::setSwrEnable(qint32 swr_enable) {
    this->swr_enable = swr_enable;
    this->m_swr_enable_isSet = true;
}

qint32
SWGLimeRFESettings::getSwrSource() {
    return swr_source;
}
void
SWGLimeRFESettings::setSwrSource(qint32 swr_source) {
    this->swr_source = swr_source;
    this->m_swr_source_isSet = true;
}

qint32
SWGLimeRFESettings::getRxOn() {
    return rx_on;
}
void
SWGLimeRFESettings::setRxOn(qint32 rx_on) {
    this->rx_on = rx_on;
    this->m_rx_on_isSet = true;
}

qint32
SWGLimeRFESettings::getTxOn() {
    return tx_on;
}
void
SWGLimeRFESettings::setTxOn(qint32 tx_on) {
    this->tx_on = tx_on;
    this->m_tx_on_isSet = true;
}


bool
SWGLimeRFESettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(device_path && *device_path != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_rx_channels_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rx_wideband_channel_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rx_ham_channel_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rx_cellular_channel_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rx_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_attenuation_factor_isSet){
            isObjectUpdated = true; break;
        }
        if(m_amfm_notch_isSet){
            isObjectUpdated = true; break;
        }
        if(m_tx_channels_isSet){
            isObjectUpdated = true; break;
        }
        if(m_tx_wideband_channel_isSet){
            isObjectUpdated = true; break;
        }
        if(m_tx_ham_channel_isSet){
            isObjectUpdated = true; break;
        }
        if(m_tx_cellular_channel_isSet){
            isObjectUpdated = true; break;
        }
        if(m_tx_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_swr_enable_isSet){
            isObjectUpdated = true; break;
        }
        if(m_swr_source_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rx_on_isSet){
            isObjectUpdated = true; break;
        }
        if(m_tx_on_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

