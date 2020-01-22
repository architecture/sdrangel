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


#include "SWGInstanceConfigResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGInstanceConfigResponse::SWGInstanceConfigResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInstanceConfigResponse::SWGInstanceConfigResponse() {
    preferences = nullptr;
    m_preferences_isSet = false;
    working_preset = nullptr;
    m_working_preset_isSet = false;
    presets = nullptr;
    m_presets_isSet = false;
    commands = nullptr;
    m_commands_isSet = false;
}

SWGInstanceConfigResponse::~SWGInstanceConfigResponse() {
    this->cleanup();
}

void
SWGInstanceConfigResponse::init() {
    preferences = new SWGPreferences();
    m_preferences_isSet = false;
    working_preset = new SWGPreset();
    m_working_preset_isSet = false;
    presets = new QList<SWGPreset*>();
    m_presets_isSet = false;
    commands = new QList<SWGCommand*>();
    m_commands_isSet = false;
}

void
SWGInstanceConfigResponse::cleanup() {
    if(preferences != nullptr) { 
        delete preferences;
    }
    if(working_preset != nullptr) { 
        delete working_preset;
    }
    if(presets != nullptr) { 
        auto arr = presets;
        for(auto o: *arr) { 
            delete o;
        }
        delete presets;
    }
    if(commands != nullptr) { 
        auto arr = commands;
        for(auto o: *arr) { 
            delete o;
        }
        delete commands;
    }
}

SWGInstanceConfigResponse*
SWGInstanceConfigResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInstanceConfigResponse::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&preferences, pJson["preferences"], "SWGPreferences", "SWGPreferences");
    
    ::SWGSDRangel::setValue(&working_preset, pJson["workingPreset"], "SWGPreset", "SWGPreset");
    
    
    ::SWGSDRangel::setValue(&presets, pJson["presets"], "QList", "SWGPreset");
    
    ::SWGSDRangel::setValue(&commands, pJson["commands"], "QList", "SWGCommand");
}

QString
SWGInstanceConfigResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGInstanceConfigResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if((preferences != nullptr) && (preferences->isSet())){
        toJsonValue(QString("preferences"), preferences, obj, QString("SWGPreferences"));
    }
    if((working_preset != nullptr) && (working_preset->isSet())){
        toJsonValue(QString("workingPreset"), working_preset, obj, QString("SWGPreset"));
    }
    if(presets && presets->size() > 0){
        toJsonArray((QList<void*>*)presets, obj, "presets", "SWGPreset");
    }
    if(commands && commands->size() > 0){
        toJsonArray((QList<void*>*)commands, obj, "commands", "SWGCommand");
    }

    return obj;
}

SWGPreferences*
SWGInstanceConfigResponse::getPreferences() {
    return preferences;
}
void
SWGInstanceConfigResponse::setPreferences(SWGPreferences* preferences) {
    this->preferences = preferences;
    this->m_preferences_isSet = true;
}

SWGPreset*
SWGInstanceConfigResponse::getWorkingPreset() {
    return working_preset;
}
void
SWGInstanceConfigResponse::setWorkingPreset(SWGPreset* working_preset) {
    this->working_preset = working_preset;
    this->m_working_preset_isSet = true;
}

QList<SWGPreset*>*
SWGInstanceConfigResponse::getPresets() {
    return presets;
}
void
SWGInstanceConfigResponse::setPresets(QList<SWGPreset*>* presets) {
    this->presets = presets;
    this->m_presets_isSet = true;
}

QList<SWGCommand*>*
SWGInstanceConfigResponse::getCommands() {
    return commands;
}
void
SWGInstanceConfigResponse::setCommands(QList<SWGCommand*>* commands) {
    this->commands = commands;
    this->m_commands_isSet = true;
}


bool
SWGInstanceConfigResponse::isSet(){
    bool isObjectUpdated = false;
    do{
        if(preferences && preferences->isSet()){
            isObjectUpdated = true; break;
        }
        if(working_preset && working_preset->isSet()){
            isObjectUpdated = true; break;
        }
        if(presets && (presets->size() > 0)){
            isObjectUpdated = true; break;
        }
        if(commands && (commands->size() > 0)){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

