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


#include "SWGBladeRF1InputSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGBladeRF1InputSettings::SWGBladeRF1InputSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGBladeRF1InputSettings::SWGBladeRF1InputSettings() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    dev_sample_rate = 0;
    m_dev_sample_rate_isSet = false;
    lna_gain = 0;
    m_lna_gain_isSet = false;
    vga1 = 0;
    m_vga1_isSet = false;
    vga2 = 0;
    m_vga2_isSet = false;
    bandwidth = 0;
    m_bandwidth_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    fc_pos = 0;
    m_fc_pos_isSet = false;
    xb200 = 0;
    m_xb200_isSet = false;
    xb200_path = 0;
    m_xb200_path_isSet = false;
    xb200_filter = 0;
    m_xb200_filter_isSet = false;
    dc_block = 0;
    m_dc_block_isSet = false;
    iq_correction = 0;
    m_iq_correction_isSet = false;
    file_record_name = nullptr;
    m_file_record_name_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
}

SWGBladeRF1InputSettings::~SWGBladeRF1InputSettings() {
    this->cleanup();
}

void
SWGBladeRF1InputSettings::init() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    dev_sample_rate = 0;
    m_dev_sample_rate_isSet = false;
    lna_gain = 0;
    m_lna_gain_isSet = false;
    vga1 = 0;
    m_vga1_isSet = false;
    vga2 = 0;
    m_vga2_isSet = false;
    bandwidth = 0;
    m_bandwidth_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    fc_pos = 0;
    m_fc_pos_isSet = false;
    xb200 = 0;
    m_xb200_isSet = false;
    xb200_path = 0;
    m_xb200_path_isSet = false;
    xb200_filter = 0;
    m_xb200_filter_isSet = false;
    dc_block = 0;
    m_dc_block_isSet = false;
    iq_correction = 0;
    m_iq_correction_isSet = false;
    file_record_name = new QString("");
    m_file_record_name_isSet = false;
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
SWGBladeRF1InputSettings::cleanup() {













    if(file_record_name != nullptr) { 
        delete file_record_name;
    }

    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }


}

SWGBladeRF1InputSettings*
SWGBladeRF1InputSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGBladeRF1InputSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&dev_sample_rate, pJson["devSampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lna_gain, pJson["lnaGain"], "qint32", "");
    
    ::SWGSDRangel::setValue(&vga1, pJson["vga1"], "qint32", "");
    
    ::SWGSDRangel::setValue(&vga2, pJson["vga2"], "qint32", "");
    
    ::SWGSDRangel::setValue(&bandwidth, pJson["bandwidth"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_decim, pJson["log2Decim"], "qint32", "");
    
    ::SWGSDRangel::setValue(&fc_pos, pJson["fcPos"], "qint32", "");
    
    ::SWGSDRangel::setValue(&xb200, pJson["xb200"], "qint32", "");
    
    ::SWGSDRangel::setValue(&xb200_path, pJson["xb200Path"], "qint32", "");
    
    ::SWGSDRangel::setValue(&xb200_filter, pJson["xb200Filter"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dc_block, pJson["dcBlock"], "qint32", "");
    
    ::SWGSDRangel::setValue(&iq_correction, pJson["iqCorrection"], "qint32", "");
    
    ::SWGSDRangel::setValue(&file_record_name, pJson["fileRecordName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
}

QString
SWGBladeRF1InputSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGBladeRF1InputSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(m_dev_sample_rate_isSet){
        obj->insert("devSampleRate", QJsonValue(dev_sample_rate));
    }
    if(m_lna_gain_isSet){
        obj->insert("lnaGain", QJsonValue(lna_gain));
    }
    if(m_vga1_isSet){
        obj->insert("vga1", QJsonValue(vga1));
    }
    if(m_vga2_isSet){
        obj->insert("vga2", QJsonValue(vga2));
    }
    if(m_bandwidth_isSet){
        obj->insert("bandwidth", QJsonValue(bandwidth));
    }
    if(m_log2_decim_isSet){
        obj->insert("log2Decim", QJsonValue(log2_decim));
    }
    if(m_fc_pos_isSet){
        obj->insert("fcPos", QJsonValue(fc_pos));
    }
    if(m_xb200_isSet){
        obj->insert("xb200", QJsonValue(xb200));
    }
    if(m_xb200_path_isSet){
        obj->insert("xb200Path", QJsonValue(xb200_path));
    }
    if(m_xb200_filter_isSet){
        obj->insert("xb200Filter", QJsonValue(xb200_filter));
    }
    if(m_dc_block_isSet){
        obj->insert("dcBlock", QJsonValue(dc_block));
    }
    if(m_iq_correction_isSet){
        obj->insert("iqCorrection", QJsonValue(iq_correction));
    }
    if(file_record_name != nullptr && *file_record_name != QString("")){
        toJsonValue(QString("fileRecordName"), file_record_name, obj, QString("QString"));
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
SWGBladeRF1InputSettings::getCenterFrequency() {
    return center_frequency;
}
void
SWGBladeRF1InputSettings::setCenterFrequency(qint64 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

qint32
SWGBladeRF1InputSettings::getDevSampleRate() {
    return dev_sample_rate;
}
void
SWGBladeRF1InputSettings::setDevSampleRate(qint32 dev_sample_rate) {
    this->dev_sample_rate = dev_sample_rate;
    this->m_dev_sample_rate_isSet = true;
}

qint32
SWGBladeRF1InputSettings::getLnaGain() {
    return lna_gain;
}
void
SWGBladeRF1InputSettings::setLnaGain(qint32 lna_gain) {
    this->lna_gain = lna_gain;
    this->m_lna_gain_isSet = true;
}

qint32
SWGBladeRF1InputSettings::getVga1() {
    return vga1;
}
void
SWGBladeRF1InputSettings::setVga1(qint32 vga1) {
    this->vga1 = vga1;
    this->m_vga1_isSet = true;
}

qint32
SWGBladeRF1InputSettings::getVga2() {
    return vga2;
}
void
SWGBladeRF1InputSettings::setVga2(qint32 vga2) {
    this->vga2 = vga2;
    this->m_vga2_isSet = true;
}

qint32
SWGBladeRF1InputSettings::getBandwidth() {
    return bandwidth;
}
void
SWGBladeRF1InputSettings::setBandwidth(qint32 bandwidth) {
    this->bandwidth = bandwidth;
    this->m_bandwidth_isSet = true;
}

qint32
SWGBladeRF1InputSettings::getLog2Decim() {
    return log2_decim;
}
void
SWGBladeRF1InputSettings::setLog2Decim(qint32 log2_decim) {
    this->log2_decim = log2_decim;
    this->m_log2_decim_isSet = true;
}

qint32
SWGBladeRF1InputSettings::getFcPos() {
    return fc_pos;
}
void
SWGBladeRF1InputSettings::setFcPos(qint32 fc_pos) {
    this->fc_pos = fc_pos;
    this->m_fc_pos_isSet = true;
}

qint32
SWGBladeRF1InputSettings::getXb200() {
    return xb200;
}
void
SWGBladeRF1InputSettings::setXb200(qint32 xb200) {
    this->xb200 = xb200;
    this->m_xb200_isSet = true;
}

qint32
SWGBladeRF1InputSettings::getXb200Path() {
    return xb200_path;
}
void
SWGBladeRF1InputSettings::setXb200Path(qint32 xb200_path) {
    this->xb200_path = xb200_path;
    this->m_xb200_path_isSet = true;
}

qint32
SWGBladeRF1InputSettings::getXb200Filter() {
    return xb200_filter;
}
void
SWGBladeRF1InputSettings::setXb200Filter(qint32 xb200_filter) {
    this->xb200_filter = xb200_filter;
    this->m_xb200_filter_isSet = true;
}

qint32
SWGBladeRF1InputSettings::getDcBlock() {
    return dc_block;
}
void
SWGBladeRF1InputSettings::setDcBlock(qint32 dc_block) {
    this->dc_block = dc_block;
    this->m_dc_block_isSet = true;
}

qint32
SWGBladeRF1InputSettings::getIqCorrection() {
    return iq_correction;
}
void
SWGBladeRF1InputSettings::setIqCorrection(qint32 iq_correction) {
    this->iq_correction = iq_correction;
    this->m_iq_correction_isSet = true;
}

QString*
SWGBladeRF1InputSettings::getFileRecordName() {
    return file_record_name;
}
void
SWGBladeRF1InputSettings::setFileRecordName(QString* file_record_name) {
    this->file_record_name = file_record_name;
    this->m_file_record_name_isSet = true;
}

qint32
SWGBladeRF1InputSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGBladeRF1InputSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGBladeRF1InputSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGBladeRF1InputSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGBladeRF1InputSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGBladeRF1InputSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGBladeRF1InputSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGBladeRF1InputSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}


bool
SWGBladeRF1InputSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_center_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_dev_sample_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_lna_gain_isSet){
            isObjectUpdated = true; break;
        }
        if(m_vga1_isSet){
            isObjectUpdated = true; break;
        }
        if(m_vga2_isSet){
            isObjectUpdated = true; break;
        }
        if(m_bandwidth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_log2_decim_isSet){
            isObjectUpdated = true; break;
        }
        if(m_fc_pos_isSet){
            isObjectUpdated = true; break;
        }
        if(m_xb200_isSet){
            isObjectUpdated = true; break;
        }
        if(m_xb200_path_isSet){
            isObjectUpdated = true; break;
        }
        if(m_xb200_filter_isSet){
            isObjectUpdated = true; break;
        }
        if(m_dc_block_isSet){
            isObjectUpdated = true; break;
        }
        if(m_iq_correction_isSet){
            isObjectUpdated = true; break;
        }
        if(file_record_name && *file_record_name != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_use_reverse_api_isSet){
            isObjectUpdated = true; break;
        }
        if(reverse_api_address && *reverse_api_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_device_index_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

