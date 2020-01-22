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


#include "SWGTraceData.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGTraceData::SWGTraceData(QString* json) {
    init();
    this->fromJson(*json);
}

SWGTraceData::SWGTraceData() {
    projection_type = 0;
    m_projection_type_isSet = false;
    input_index = 0;
    m_input_index_isSet = false;
    amp = 0.0f;
    m_amp_isSet = false;
    amp_index = 0;
    m_amp_index_isSet = false;
    ofs = 0.0f;
    m_ofs_isSet = false;
    ofs_coarse = 0;
    m_ofs_coarse_isSet = false;
    ofs_fine = 0;
    m_ofs_fine_isSet = false;
    trace_delay = 0;
    m_trace_delay_isSet = false;
    trace_delay_coarse = 0;
    m_trace_delay_coarse_isSet = false;
    trace_delay_fine = 0;
    m_trace_delay_fine_isSet = false;
    trigger_display_level = 0.0f;
    m_trigger_display_level_isSet = false;
    trace_color = 0;
    m_trace_color_isSet = false;
    trace_color_r = 0.0f;
    m_trace_color_r_isSet = false;
    trace_color_g = 0.0f;
    m_trace_color_g_isSet = false;
    trace_color_b = 0.0f;
    m_trace_color_b_isSet = false;
    has_text_overlay = 0;
    m_has_text_overlay_isSet = false;
    text_overlay = nullptr;
    m_text_overlay_isSet = false;
    view_trace = 0;
    m_view_trace_isSet = false;
}

SWGTraceData::~SWGTraceData() {
    this->cleanup();
}

void
SWGTraceData::init() {
    projection_type = 0;
    m_projection_type_isSet = false;
    input_index = 0;
    m_input_index_isSet = false;
    amp = 0.0f;
    m_amp_isSet = false;
    amp_index = 0;
    m_amp_index_isSet = false;
    ofs = 0.0f;
    m_ofs_isSet = false;
    ofs_coarse = 0;
    m_ofs_coarse_isSet = false;
    ofs_fine = 0;
    m_ofs_fine_isSet = false;
    trace_delay = 0;
    m_trace_delay_isSet = false;
    trace_delay_coarse = 0;
    m_trace_delay_coarse_isSet = false;
    trace_delay_fine = 0;
    m_trace_delay_fine_isSet = false;
    trigger_display_level = 0.0f;
    m_trigger_display_level_isSet = false;
    trace_color = 0;
    m_trace_color_isSet = false;
    trace_color_r = 0.0f;
    m_trace_color_r_isSet = false;
    trace_color_g = 0.0f;
    m_trace_color_g_isSet = false;
    trace_color_b = 0.0f;
    m_trace_color_b_isSet = false;
    has_text_overlay = 0;
    m_has_text_overlay_isSet = false;
    text_overlay = new QString("");
    m_text_overlay_isSet = false;
    view_trace = 0;
    m_view_trace_isSet = false;
}

void
SWGTraceData::cleanup() {
















    if(text_overlay != nullptr) { 
        delete text_overlay;
    }

}

SWGTraceData*
SWGTraceData::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGTraceData::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&projection_type, pJson["projectionType"], "qint32", "");
    
    ::SWGSDRangel::setValue(&input_index, pJson["inputIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&amp, pJson["amp"], "float", "");
    
    ::SWGSDRangel::setValue(&amp_index, pJson["ampIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&ofs, pJson["ofs"], "float", "");
    
    ::SWGSDRangel::setValue(&ofs_coarse, pJson["ofsCoarse"], "qint32", "");
    
    ::SWGSDRangel::setValue(&ofs_fine, pJson["ofsFine"], "qint32", "");
    
    ::SWGSDRangel::setValue(&trace_delay, pJson["traceDelay"], "qint32", "");
    
    ::SWGSDRangel::setValue(&trace_delay_coarse, pJson["traceDelayCoarse"], "qint32", "");
    
    ::SWGSDRangel::setValue(&trace_delay_fine, pJson["traceDelayFine"], "qint32", "");
    
    ::SWGSDRangel::setValue(&trigger_display_level, pJson["triggerDisplayLevel"], "float", "");
    
    ::SWGSDRangel::setValue(&trace_color, pJson["traceColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&trace_color_r, pJson["traceColorR"], "float", "");
    
    ::SWGSDRangel::setValue(&trace_color_g, pJson["traceColorG"], "float", "");
    
    ::SWGSDRangel::setValue(&trace_color_b, pJson["traceColorB"], "float", "");
    
    ::SWGSDRangel::setValue(&has_text_overlay, pJson["hasTextOverlay"], "qint32", "");
    
    ::SWGSDRangel::setValue(&text_overlay, pJson["textOverlay"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&view_trace, pJson["viewTrace"], "qint32", "");
    
}

QString
SWGTraceData::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGTraceData::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_projection_type_isSet){
        obj->insert("projectionType", QJsonValue(projection_type));
    }
    if(m_input_index_isSet){
        obj->insert("inputIndex", QJsonValue(input_index));
    }
    if(m_amp_isSet){
        obj->insert("amp", QJsonValue(amp));
    }
    if(m_amp_index_isSet){
        obj->insert("ampIndex", QJsonValue(amp_index));
    }
    if(m_ofs_isSet){
        obj->insert("ofs", QJsonValue(ofs));
    }
    if(m_ofs_coarse_isSet){
        obj->insert("ofsCoarse", QJsonValue(ofs_coarse));
    }
    if(m_ofs_fine_isSet){
        obj->insert("ofsFine", QJsonValue(ofs_fine));
    }
    if(m_trace_delay_isSet){
        obj->insert("traceDelay", QJsonValue(trace_delay));
    }
    if(m_trace_delay_coarse_isSet){
        obj->insert("traceDelayCoarse", QJsonValue(trace_delay_coarse));
    }
    if(m_trace_delay_fine_isSet){
        obj->insert("traceDelayFine", QJsonValue(trace_delay_fine));
    }
    if(m_trigger_display_level_isSet){
        obj->insert("triggerDisplayLevel", QJsonValue(trigger_display_level));
    }
    if(m_trace_color_isSet){
        obj->insert("traceColor", QJsonValue(trace_color));
    }
    if(m_trace_color_r_isSet){
        obj->insert("traceColorR", QJsonValue(trace_color_r));
    }
    if(m_trace_color_g_isSet){
        obj->insert("traceColorG", QJsonValue(trace_color_g));
    }
    if(m_trace_color_b_isSet){
        obj->insert("traceColorB", QJsonValue(trace_color_b));
    }
    if(m_has_text_overlay_isSet){
        obj->insert("hasTextOverlay", QJsonValue(has_text_overlay));
    }
    if(text_overlay != nullptr && *text_overlay != QString("")){
        toJsonValue(QString("textOverlay"), text_overlay, obj, QString("QString"));
    }
    if(m_view_trace_isSet){
        obj->insert("viewTrace", QJsonValue(view_trace));
    }

    return obj;
}

qint32
SWGTraceData::getProjectionType() {
    return projection_type;
}
void
SWGTraceData::setProjectionType(qint32 projection_type) {
    this->projection_type = projection_type;
    this->m_projection_type_isSet = true;
}

qint32
SWGTraceData::getInputIndex() {
    return input_index;
}
void
SWGTraceData::setInputIndex(qint32 input_index) {
    this->input_index = input_index;
    this->m_input_index_isSet = true;
}

float
SWGTraceData::getAmp() {
    return amp;
}
void
SWGTraceData::setAmp(float amp) {
    this->amp = amp;
    this->m_amp_isSet = true;
}

qint32
SWGTraceData::getAmpIndex() {
    return amp_index;
}
void
SWGTraceData::setAmpIndex(qint32 amp_index) {
    this->amp_index = amp_index;
    this->m_amp_index_isSet = true;
}

float
SWGTraceData::getOfs() {
    return ofs;
}
void
SWGTraceData::setOfs(float ofs) {
    this->ofs = ofs;
    this->m_ofs_isSet = true;
}

qint32
SWGTraceData::getOfsCoarse() {
    return ofs_coarse;
}
void
SWGTraceData::setOfsCoarse(qint32 ofs_coarse) {
    this->ofs_coarse = ofs_coarse;
    this->m_ofs_coarse_isSet = true;
}

qint32
SWGTraceData::getOfsFine() {
    return ofs_fine;
}
void
SWGTraceData::setOfsFine(qint32 ofs_fine) {
    this->ofs_fine = ofs_fine;
    this->m_ofs_fine_isSet = true;
}

qint32
SWGTraceData::getTraceDelay() {
    return trace_delay;
}
void
SWGTraceData::setTraceDelay(qint32 trace_delay) {
    this->trace_delay = trace_delay;
    this->m_trace_delay_isSet = true;
}

qint32
SWGTraceData::getTraceDelayCoarse() {
    return trace_delay_coarse;
}
void
SWGTraceData::setTraceDelayCoarse(qint32 trace_delay_coarse) {
    this->trace_delay_coarse = trace_delay_coarse;
    this->m_trace_delay_coarse_isSet = true;
}

qint32
SWGTraceData::getTraceDelayFine() {
    return trace_delay_fine;
}
void
SWGTraceData::setTraceDelayFine(qint32 trace_delay_fine) {
    this->trace_delay_fine = trace_delay_fine;
    this->m_trace_delay_fine_isSet = true;
}

float
SWGTraceData::getTriggerDisplayLevel() {
    return trigger_display_level;
}
void
SWGTraceData::setTriggerDisplayLevel(float trigger_display_level) {
    this->trigger_display_level = trigger_display_level;
    this->m_trigger_display_level_isSet = true;
}

qint32
SWGTraceData::getTraceColor() {
    return trace_color;
}
void
SWGTraceData::setTraceColor(qint32 trace_color) {
    this->trace_color = trace_color;
    this->m_trace_color_isSet = true;
}

float
SWGTraceData::getTraceColorR() {
    return trace_color_r;
}
void
SWGTraceData::setTraceColorR(float trace_color_r) {
    this->trace_color_r = trace_color_r;
    this->m_trace_color_r_isSet = true;
}

float
SWGTraceData::getTraceColorG() {
    return trace_color_g;
}
void
SWGTraceData::setTraceColorG(float trace_color_g) {
    this->trace_color_g = trace_color_g;
    this->m_trace_color_g_isSet = true;
}

float
SWGTraceData::getTraceColorB() {
    return trace_color_b;
}
void
SWGTraceData::setTraceColorB(float trace_color_b) {
    this->trace_color_b = trace_color_b;
    this->m_trace_color_b_isSet = true;
}

qint32
SWGTraceData::getHasTextOverlay() {
    return has_text_overlay;
}
void
SWGTraceData::setHasTextOverlay(qint32 has_text_overlay) {
    this->has_text_overlay = has_text_overlay;
    this->m_has_text_overlay_isSet = true;
}

QString*
SWGTraceData::getTextOverlay() {
    return text_overlay;
}
void
SWGTraceData::setTextOverlay(QString* text_overlay) {
    this->text_overlay = text_overlay;
    this->m_text_overlay_isSet = true;
}

qint32
SWGTraceData::getViewTrace() {
    return view_trace;
}
void
SWGTraceData::setViewTrace(qint32 view_trace) {
    this->view_trace = view_trace;
    this->m_view_trace_isSet = true;
}


bool
SWGTraceData::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_projection_type_isSet){
            isObjectUpdated = true; break;
        }
        if(m_input_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_amp_isSet){
            isObjectUpdated = true; break;
        }
        if(m_amp_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_ofs_isSet){
            isObjectUpdated = true; break;
        }
        if(m_ofs_coarse_isSet){
            isObjectUpdated = true; break;
        }
        if(m_ofs_fine_isSet){
            isObjectUpdated = true; break;
        }
        if(m_trace_delay_isSet){
            isObjectUpdated = true; break;
        }
        if(m_trace_delay_coarse_isSet){
            isObjectUpdated = true; break;
        }
        if(m_trace_delay_fine_isSet){
            isObjectUpdated = true; break;
        }
        if(m_trigger_display_level_isSet){
            isObjectUpdated = true; break;
        }
        if(m_trace_color_isSet){
            isObjectUpdated = true; break;
        }
        if(m_trace_color_r_isSet){
            isObjectUpdated = true; break;
        }
        if(m_trace_color_g_isSet){
            isObjectUpdated = true; break;
        }
        if(m_trace_color_b_isSet){
            isObjectUpdated = true; break;
        }
        if(m_has_text_overlay_isSet){
            isObjectUpdated = true; break;
        }
        if(text_overlay && *text_overlay != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_view_trace_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

