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


#include "SWGATVModReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGATVModReport::SWGATVModReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGATVModReport::SWGATVModReport() {
    channel_power_db = 0.0f;
    m_channel_power_db_isSet = false;
    channel_sample_rate = 0;
    m_channel_sample_rate_isSet = false;
}

SWGATVModReport::~SWGATVModReport() {
    this->cleanup();
}

void
SWGATVModReport::init() {
    channel_power_db = 0.0f;
    m_channel_power_db_isSet = false;
    channel_sample_rate = 0;
    m_channel_sample_rate_isSet = false;
}

void
SWGATVModReport::cleanup() {


}

SWGATVModReport*
SWGATVModReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGATVModReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&channel_power_db, pJson["channelPowerDB"], "float", "");
    
    ::SWGSDRangel::setValue(&channel_sample_rate, pJson["channelSampleRate"], "qint32", "");
    
}

QString
SWGATVModReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGATVModReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_channel_power_db_isSet){
        obj->insert("channelPowerDB", QJsonValue(channel_power_db));
    }
    if(m_channel_sample_rate_isSet){
        obj->insert("channelSampleRate", QJsonValue(channel_sample_rate));
    }

    return obj;
}

float
SWGATVModReport::getChannelPowerDb() {
    return channel_power_db;
}
void
SWGATVModReport::setChannelPowerDb(float channel_power_db) {
    this->channel_power_db = channel_power_db;
    this->m_channel_power_db_isSet = true;
}

qint32
SWGATVModReport::getChannelSampleRate() {
    return channel_sample_rate;
}
void
SWGATVModReport::setChannelSampleRate(qint32 channel_sample_rate) {
    this->channel_sample_rate = channel_sample_rate;
    this->m_channel_sample_rate_isSet = true;
}


bool
SWGATVModReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_channel_power_db_isSet){
            isObjectUpdated = true; break;
        }
        if(m_channel_sample_rate_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

