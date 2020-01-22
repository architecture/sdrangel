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


#include "SWGPresetItem.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGPresetItem::SWGPresetItem(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPresetItem::SWGPresetItem() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    type = nullptr;
    m_type_isSet = false;
    name = nullptr;
    m_name_isSet = false;
}

SWGPresetItem::~SWGPresetItem() {
    this->cleanup();
}

void
SWGPresetItem::init() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    type = new QString("");
    m_type_isSet = false;
    name = new QString("");
    m_name_isSet = false;
}

void
SWGPresetItem::cleanup() {

    if(type != nullptr) { 
        delete type;
    }
    if(name != nullptr) { 
        delete name;
    }
}

SWGPresetItem*
SWGPresetItem::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPresetItem::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&type, pJson["type"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&name, pJson["name"], "QString", "QString");
    
}

QString
SWGPresetItem::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGPresetItem::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(type != nullptr && *type != QString("")){
        toJsonValue(QString("type"), type, obj, QString("QString"));
    }
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }

    return obj;
}

qint64
SWGPresetItem::getCenterFrequency() {
    return center_frequency;
}
void
SWGPresetItem::setCenterFrequency(qint64 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

QString*
SWGPresetItem::getType() {
    return type;
}
void
SWGPresetItem::setType(QString* type) {
    this->type = type;
    this->m_type_isSet = true;
}

QString*
SWGPresetItem::getName() {
    return name;
}
void
SWGPresetItem::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}


bool
SWGPresetItem::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_center_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(type && *type != QString("")){
            isObjectUpdated = true; break;
        }
        if(name && *name != QString("")){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

