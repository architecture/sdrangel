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
 * SWGGLScope.h
 *
 * GLScopeGUI settings
 */

#ifndef SWGGLScope_H_
#define SWGGLScope_H_

#include <QJsonObject>


#include "SWGTraceData.h"
#include "SWGTriggerData.h"
#include <QList>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGGLScope: public SWGObject {
public:
    SWGGLScope();
    SWGGLScope(QString* json);
    virtual ~SWGGLScope();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGGLScope* fromJson(QString &jsonString) override;

    qint32 getDisplayMode();
    void setDisplayMode(qint32 display_mode);

    qint32 getTraceIntensity();
    void setTraceIntensity(qint32 trace_intensity);

    qint32 getGridIntensity();
    void setGridIntensity(qint32 grid_intensity);

    qint32 getTime();
    void setTime(qint32 time);

    qint32 getTimeOfs();
    void setTimeOfs(qint32 time_ofs);

    qint32 getTraceLen();
    void setTraceLen(qint32 trace_len);

    qint32 getTrigPre();
    void setTrigPre(qint32 trig_pre);

    QList<SWGTraceData*>* getTracesData();
    void setTracesData(QList<SWGTraceData*>* traces_data);

    QList<SWGTriggerData*>* getTriggersData();
    void setTriggersData(QList<SWGTriggerData*>* triggers_data);


    virtual bool isSet() override;

private:
    qint32 display_mode;
    bool m_display_mode_isSet;

    qint32 trace_intensity;
    bool m_trace_intensity_isSet;

    qint32 grid_intensity;
    bool m_grid_intensity_isSet;

    qint32 time;
    bool m_time_isSet;

    qint32 time_ofs;
    bool m_time_ofs_isSet;

    qint32 trace_len;
    bool m_trace_len_isSet;

    qint32 trig_pre;
    bool m_trig_pre_isSet;

    QList<SWGTraceData*>* traces_data;
    bool m_traces_data_isSet;

    QList<SWGTriggerData*>* triggers_data;
    bool m_triggers_data_isSet;

};

}

#endif /* SWGGLScope_H_ */
