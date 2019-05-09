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

#include "SWGHelpers.h"
#include "SWGModelFactory.h"
#include "SWGObject.h"
#include <QDebug>
#include <QJsonArray>
#include <QJsonValue>
#include <QDateTime>


namespace SWGSDRangel {

void
setValue(void* value, QJsonValue obj, QString type, QString complexType) {
    if(value == nullptr) {
        // can't set value with a null pointer
        return;
    }
    if(QStringLiteral("bool").compare(type) == 0) {
        bool * val = static_cast<bool*>(value);
        *val = obj.toBool();
    }
    else if(QStringLiteral("qint32").compare(type) == 0) {
        qint32 *val = static_cast<qint32*>(value);
        *val = obj.toInt();
    }
    else if(QStringLiteral("qint64").compare(type) == 0) {
        qint64 *val = static_cast<qint64*>(value);
        *val = obj.toVariant().toLongLong();
    }
    else if(QStringLiteral("float").compare(type) == 0) {
        float *val = static_cast<float*>(value);
        *val = obj.toDouble();
    }
    else if(QStringLiteral("double").compare(type) == 0) {
        double *val = static_cast<double*>(value);
        *val = obj.toDouble();
    }
    else if (QStringLiteral("QString").compare(type) == 0) {
        QString **val = static_cast<QString**>(value);
        if(val != nullptr) {
            if(!obj.isNull()) {
                // create a new value and return
                if(*val != nullptr) delete *val;
                *val = new QString(obj.toString());
                return;
            }
            else {
                // set target to nullptr
                if(*val != nullptr) delete *val;
                *val = nullptr;
            }
        }
        else {
            qDebug() << "Can't set value because the target pointer is nullptr";
        }
    }
    else if (QStringLiteral("QDateTime").compare(type) == 0) {
        QDateTime **val = static_cast<QDateTime**>(value);

        if(val != nullptr) {
            if(!obj.isNull()) {
                // create a new value and return
                if(*val != nullptr) delete *val;
                *val = new QDateTime(QDateTime::fromString(obj.toString(), Qt::ISODate));
                return;
            }
            else {
                // set target to nullptr
                if(*val != nullptr) delete *val;
                *val = nullptr;
            }
        }
        else {
            qDebug() << "Can't set value because the target pointer is nullptr";
        }
    }
    else if (QStringLiteral("QDate").compare(type) == 0) {
        QDate **val = static_cast<QDate**>(value);

        if(val != nullptr) {
            if(!obj.isNull()) {
                // create a new value and return
                if(*val != nullptr) delete *val;
                *val = new QDate(QDate::fromString(obj.toString(), Qt::ISODate));
                return;
            }
            else {
                // set target to nullptr
                if(*val != nullptr) delete *val;
                *val = nullptr;
            }
        }
        else {
            qDebug() << "Can't set value because the target pointer is nullptr";
        }
    }
    else if (QStringLiteral("QByteArray").compare(type) == 0) {
        QByteArray **val = static_cast<QByteArray**>(value);

        if(val != nullptr) {
            if(!obj.isNull()) {
                // create a new value and return
                if(*val != nullptr) delete *val;

                *val = new QByteArray(QByteArray::fromBase64(QByteArray::fromStdString(obj.toString().toStdString())));
                return;
            }
            else {
                // set target to nullptr
                if(*val != nullptr) delete *val;
                *val = nullptr;
            }
        }
        else {
            qDebug() << "Can't set value because the target pointer is nullptr";
        }
    }
    else if(type.startsWith("SWG") && obj.isObject()) {
        // complex type
        QJsonObject jsonObj = obj.toObject();
        SWGObject * so = (SWGObject*)::SWGSDRangel::create(complexType);
        if(so != nullptr) {
            so->fromJsonObject(jsonObj);
            SWGObject **val = static_cast<SWGObject**>(value);
            if(*val != nullptr) delete *val;
            *val = so;
        }
    }
    else if(type.startsWith("QList") && QString("").compare(complexType) != 0 && obj.isArray()) {
        // list of values
        if(complexType.startsWith("SWG")) {
            auto output = reinterpret_cast<QList<SWGObject *> **> (value);
            for (auto item : **output) {
                if(item != nullptr) delete item;
            }
            (*output)->clear();
            QJsonArray arr = obj.toArray();
            for (const QJsonValue & jval : arr) {
                // it's an object
                SWGObject * val = (SWGObject*)::SWGSDRangel::create(complexType);
                QJsonObject t = jval.toObject();
                val->fromJsonObject(t);
                (*output)->append(val);
            }
        }
        else if(QStringLiteral("qint32").compare(complexType) == 0) {
            auto output = reinterpret_cast<QList<qint32> **> (value);
            (*output)->clear();
            QJsonArray arr = obj.toArray();
            for (const QJsonValue & jval : arr){
                qint32 val;
                ::SWGSDRangel::setValue(&val, jval, QStringLiteral("qint32"), QStringLiteral(""));
                (*output)->push_back(val);
            }
        }
        else if(QStringLiteral("qint64").compare(complexType) == 0) {
            auto output = reinterpret_cast<QList<qint64> **> (value);
            (*output)->clear();
            QJsonArray arr = obj.toArray();
            for (const QJsonValue & jval : arr){
                qint64 val;
                ::SWGSDRangel::setValue(&val, jval, QStringLiteral("qint64"), QStringLiteral(""));
                (*output)->push_back(val);
            }
        }
        else if(QStringLiteral("bool").compare(complexType) == 0) {
            auto output = reinterpret_cast<QList<bool> **> (value);
            (*output)->clear();
            QJsonArray arr = obj.toArray();
            for (const QJsonValue & jval : arr){
                bool val;
                ::SWGSDRangel::setValue(&val, jval, QStringLiteral("bool"), QStringLiteral(""));
                (*output)->push_back(val);
            }
        }
        else if(QStringLiteral("float").compare(complexType) == 0) {
            auto output = reinterpret_cast<QList<float> **> (value);
            (*output)->clear();
            QJsonArray arr = obj.toArray();
            for (const QJsonValue & jval : arr){
                float val;
                ::SWGSDRangel::setValue(&val, jval, QStringLiteral("float"), QStringLiteral(""));
                (*output)->push_back(val);
            }
        }
        else if(QStringLiteral("double").compare(complexType) == 0) {
            auto output = reinterpret_cast<QList<double> **> (value);
            (*output)->clear();
            QJsonArray arr = obj.toArray();
            for (const QJsonValue & jval : arr){
                double val;
                ::SWGSDRangel::setValue(&val, jval, QStringLiteral("double"), QStringLiteral(""));
                (*output)->push_back(val);
            }
        }
        else if(QStringLiteral("QString").compare(complexType) == 0) {
            auto output = reinterpret_cast<QList<QString*> **> (value);
            for (auto item : **output) {
                if(item != nullptr) delete item;
            }
            (*output)->clear();
            QJsonArray arr = obj.toArray();
            for (const QJsonValue & jval : arr){
                QString * val = new QString();
                ::SWGSDRangel::setValue(&val, jval, QStringLiteral("QString"), QStringLiteral(""));
                (*output)->push_back(val);
            }
        }
        else if(QStringLiteral("QDate").compare(complexType) == 0) {
            auto output = reinterpret_cast<QList<QDate*> **> (value);
            for (auto item : **output) {
                if(item != nullptr) delete item;
            }
            (*output)->clear();
            QJsonArray arr = obj.toArray();
            for (const QJsonValue & jval : arr){
                QDate * val = new QDate();
                ::SWGSDRangel::setValue(&val, jval, QStringLiteral("QDate"), QStringLiteral(""));
                (*output)->push_back(val);
            }
        }
        else if(QStringLiteral("QDateTime").compare(complexType) == 0) {
            auto output = reinterpret_cast<QList<QDateTime*> **> (value);
            for (auto item : **output) {
                if(item != nullptr) delete item;
            }
            (*output)->clear();
            QJsonArray arr = obj.toArray();
            for (const QJsonValue & jval : arr){
                QDateTime * val = new QDateTime();
                ::SWGSDRangel::setValue(&val, jval, QStringLiteral("QDateTime"), QStringLiteral(""));
                (*output)->push_back(val);
            }
        }
    }
    else if(type.startsWith("QMap") && QString("").compare(complexType) != 0 && obj.isObject()) {
        // list of values
        if(complexType.startsWith("SWG")) {
            auto output = reinterpret_cast<QMap<QString, SWGObject*> **> (value);
            for (auto item : **output) {
                if(item != nullptr) delete item;
            }
            (*output)->clear();
            auto varmap = obj.toObject().toVariantMap();
            if(varmap.count() > 0){
                for(auto itemkey : varmap.keys() ){
                    auto  val = (SWGObject*)::SWGSDRangel::create(complexType);
                    auto  jsonval = QJsonValue::fromVariant(varmap.value(itemkey));
                    ::SWGSDRangel::setValue(&val, jsonval, complexType, complexType);
                    (*output)->insert(itemkey, val);
                }
            }
        }
        else if(QStringLiteral("qint32").compare(complexType) == 0) {
            auto output = reinterpret_cast<QMap<QString, qint32> **> (value);
            (*output)->clear();
            auto varmap = obj.toObject().toVariantMap();
            if(varmap.count() > 0){
                for(auto itemkey : varmap.keys() ){
                    qint32 val;
                    auto  jsonval = QJsonValue::fromVariant(varmap.value(itemkey));
                    ::SWGSDRangel::setValue(&val, jsonval, QStringLiteral("qint32"), QStringLiteral(""));
                    (*output)->insert( itemkey, val);
                }
            }
        }
        else if(QStringLiteral("qint64").compare(complexType) == 0) {
            auto output = reinterpret_cast<QMap<QString, qint64> **> (value);
            (*output)->clear();
            auto varmap = obj.toObject().toVariantMap();
            if(varmap.count() > 0){
                for(auto itemkey : varmap.keys() ){
                    qint64 val;
                    auto  jsonval = QJsonValue::fromVariant(varmap.value(itemkey));
                    ::SWGSDRangel::setValue(&val, jsonval, QStringLiteral("qint64"), QStringLiteral(""));
                    (*output)->insert( itemkey, val);
                }
            }
        }
        else if(QStringLiteral("bool").compare(complexType) == 0) {
            auto output = reinterpret_cast<QMap<QString, bool> **> (value);
            (*output)->clear();
            auto varmap = obj.toObject().toVariantMap();
            if(varmap.count() > 0){
                for(auto itemkey : varmap.keys() ){
                    bool val;
                    auto  jsonval = QJsonValue::fromVariant(varmap.value(itemkey));
                    ::SWGSDRangel::setValue(&val, jsonval, QStringLiteral("bool"), QStringLiteral(""));
                    (*output)->insert( itemkey, val);
                }
            }
        }
        else if(QStringLiteral("float").compare(complexType) == 0) {
            auto output = reinterpret_cast<QMap<QString, float> **> (value);
            (*output)->clear();
            auto varmap = obj.toObject().toVariantMap();
            if(varmap.count() > 0){
                for(auto itemkey : varmap.keys() ){
                    float val;
                    auto  jsonval = QJsonValue::fromVariant(varmap.value(itemkey));
                    ::SWGSDRangel::setValue(&val, jsonval, QStringLiteral("float"), QStringLiteral(""));
                    (*output)->insert( itemkey, val);
                }
            }
        }
        else if(QStringLiteral("double").compare(complexType) == 0) {
            auto output = reinterpret_cast<QMap<QString, double> **> (value);
            (*output)->clear();
            auto varmap = obj.toObject().toVariantMap();
            if(varmap.count() > 0){
                for(auto itemkey : varmap.keys() ){
                    double val;
                    auto  jsonval = QJsonValue::fromVariant(varmap.value(itemkey));
                    ::SWGSDRangel::setValue(&val, jsonval, QStringLiteral("double"), QStringLiteral(""));
                    (*output)->insert( itemkey, val);
                }
            }
        }
        else if(QStringLiteral("QString").compare(complexType) == 0) {
            auto output = reinterpret_cast<QMap<QString, QString*> **> (value);
            for (auto item : **output) {
                if(item != nullptr) delete item;
            }
            (*output)->clear();
            auto varmap = obj.toObject().toVariantMap();
            if(varmap.count() > 0){
                for(auto itemkey : varmap.keys() ){
                    QString * val = new QString();
                    auto  jsonval = QJsonValue::fromVariant(varmap.value(itemkey));
                    ::SWGSDRangel::setValue(&val, jsonval, QStringLiteral("QString"), QStringLiteral(""));
                    (*output)->insert( itemkey, val);
                }
            }
        }
        else if(QStringLiteral("QDate").compare(complexType) == 0) {
            auto output = reinterpret_cast<QMap<QString, QDate*> **> (value);
            for (auto item : **output) {
                if(item != nullptr) delete item;
            }
            (*output)->clear();
            auto varmap = obj.toObject().toVariantMap();
            if(varmap.count() > 0){
                for(auto itemkey : varmap.keys() ){
                    QDate * val = new QDate();
                    auto  jsonval = QJsonValue::fromVariant(varmap.value(itemkey));
                    ::SWGSDRangel::setValue(&val, jsonval, QStringLiteral("QDate"), QStringLiteral(""));
                    (*output)->insert( itemkey, val);
                }
            }
        }
         else if(QStringLiteral("QDateTime").compare(complexType) == 0) {
            auto output = reinterpret_cast<QMap<QString, QDateTime*> **> (value);
            for (auto item : **output) {
                if(item != nullptr) delete item;
            }
            (*output)->clear();
            auto varmap = obj.toObject().toVariantMap();
            if(varmap.count() > 0){
                for(auto itemkey : varmap.keys() ){
                    QDateTime * val = new QDateTime();
                    auto  jsonval = QJsonValue::fromVariant(varmap.value(itemkey));
                    ::SWGSDRangel::setValue(&val, jsonval, QStringLiteral("QDateTime"), QStringLiteral(""));
                    (*output)->insert( itemkey, val);
                }
            }
        }
    }
}

void
toJsonValue(QString name, void* value, QJsonObject* output, QString type) {
    if(value == nullptr) {
        return;
    }
    if(type.startsWith("SWG")) {
        SWGObject *SWGobject = reinterpret_cast<SWGObject *>(value);
        if(SWGobject != nullptr) {
            QJsonObject* o = (*SWGobject).asJsonObject();
            if (o != nullptr)
            {
	            if(name != nullptr) {
	                output->insert(name, *o);
	                if(o != nullptr) delete o;
	            }
	            else {
	                output->empty();
	                for(QString key : o->keys()) {
	                    output->insert(key, o->value(key));
	                }
	            }
	        }
        }
    }
    else if(QStringLiteral("QString").compare(type) == 0) {
        QString* str = static_cast<QString*>(value);
        output->insert(name, QJsonValue(*str));
    }
    else if(QStringLiteral("qint32").compare(type) == 0) {
        qint32* str = static_cast<qint32*>(value);
        output->insert(name, QJsonValue(*str));
    }
    else if(QStringLiteral("qint64").compare(type) == 0) {
        qint64* str = static_cast<qint64*>(value);
        output->insert(name, QJsonValue(*str));
    }
    else if(QStringLiteral("bool").compare(type) == 0) {
        bool* str = static_cast<bool*>(value);
        output->insert(name, QJsonValue(*str));
    }
    else if(QStringLiteral("float").compare(type) == 0) {
        float* str = static_cast<float*>(value);
        output->insert(name, QJsonValue((double)*str));
    }
    else if(QStringLiteral("double").compare(type) == 0) {
        double* str = static_cast<double*>(value);
        output->insert(name, QJsonValue(*str));
    }
    else if(QStringLiteral("QDate").compare(type) == 0) {
        QDate* date = static_cast<QDate*>(value);
        output->insert(name, QJsonValue(date->toString(Qt::ISODate)));
    }
    else if(QStringLiteral("QDateTime").compare(type) == 0) {
        QDateTime* datetime = static_cast<QDateTime*>(value);
        output->insert(name, QJsonValue(datetime->toString(Qt::ISODate)));
    }
    else if(QStringLiteral("QByteArray").compare(type) == 0) {
        QByteArray* byteArray = static_cast<QByteArray*>(value);
        output->insert(name, QJsonValue(QString(byteArray->toBase64())));
    }
}

void
toJsonArray(QList<void*>* value, QJsonObject* output, QString innerName, QString innerType) {
    if((value == nullptr) || (output == nullptr)) {
        return;
    }
    QJsonArray outputarray;
    if(innerType.startsWith("SWG")){
        for(void* obj : *value) {
            SWGObject *SWGobject = reinterpret_cast<SWGObject *>(obj);
            if(SWGobject != nullptr)
            {
                QJsonObject* o = SWGobject->asJsonObject();
                outputarray.append(*o);
                delete o;
            }
        }
    }
    else if(QStringLiteral("QString").compare(innerType) == 0) {
        for(QString* obj : *(reinterpret_cast<QList<QString*>*>(value))){
            outputarray.append(QJsonValue(*obj));
        }
    }
    else if(QStringLiteral("QDate").compare(innerType) == 0) {
        for(QDate* obj : *(reinterpret_cast<QList<QDate*>*>(value))){
            outputarray.append(QJsonValue(obj->toString(Qt::ISODate)));
        }
    }
    else if(QStringLiteral("QDateTime").compare(innerType) == 0) {
        for(QDateTime* obj : *(reinterpret_cast<QList<QDateTime*>*>(value))){
            outputarray.append(QJsonValue(obj->toString(Qt::ISODate)));        }
    }
    else if(QStringLiteral("QByteArray").compare(innerType) == 0) {
        for(QByteArray* obj : *(reinterpret_cast<QList<QByteArray*>*>(value))){
            outputarray.append(QJsonValue(QString(obj->toBase64())));
        }
    }
    else if(QStringLiteral("qint32").compare(innerType) == 0) {
        for(qint32 obj : *(reinterpret_cast<QList<qint32>*>(value)))
            outputarray.append(QJsonValue(obj));
    }
    else if(QStringLiteral("qint64").compare(innerType) == 0) {
        for(qint64 obj : *(reinterpret_cast<QList<qint64>*>(value)))
            outputarray.append(QJsonValue(obj));
    }
    else if(QStringLiteral("bool").compare(innerType) == 0) {
        for(bool obj : *(reinterpret_cast<QList<bool>*>(value)))
            outputarray.append(QJsonValue(obj));
    }
    else if(QStringLiteral("float").compare(innerType) == 0) {
        for(float obj : *(reinterpret_cast<QList<float>*>(value)))
            outputarray.append(QJsonValue(obj));
    }
    else if(QStringLiteral("double").compare(innerType) == 0) {
        for(double obj : *(reinterpret_cast<QList<double>*>(value)))
            outputarray.append(QJsonValue(obj));
    }
    output->insert(innerName, outputarray);
}

void
toJsonMap(QMap<QString, void*>* value, QJsonObject* output, QString innerName, QString innerType) {
    if((value == nullptr) || (output == nullptr)) {
        return;
    }
    QJsonObject mapobj;
    if(innerType.startsWith("SWG")){
        auto items = reinterpret_cast< QMap<QString, SWGObject*> *>(value);
        for(auto itemkey: items->keys()) {
            ::SWGSDRangel::toJsonValue(itemkey, items->value(itemkey), &mapobj, innerType);
        }
    }
    else if(QStringLiteral("QString").compare(innerType) == 0) {
        auto items = reinterpret_cast< QMap<QString, QString*> *>(value);
        for(auto itemkey: items->keys()) {
            ::SWGSDRangel::toJsonValue(itemkey, items->value(itemkey), &mapobj, innerType);
        }
    }
    else if(QStringLiteral("QDate").compare(innerType) == 0) {
        auto items = reinterpret_cast< QMap<QString, QDate*> *>(value);
        for(auto itemkey: items->keys()) {
            ::SWGSDRangel::toJsonValue(itemkey, items->value(itemkey), &mapobj, innerType);
        }
    }
    else if(QStringLiteral("QDateTime").compare(innerType) == 0) {
        auto items = reinterpret_cast< QMap<QString, QDateTime*> *>(value);
        for(auto itemkey: items->keys()) {
            ::SWGSDRangel::toJsonValue(itemkey, items->value(itemkey), &mapobj, innerType);
        }
    }
    else if(QStringLiteral("QByteArray").compare(innerType) == 0) {
        auto items = reinterpret_cast< QMap<QString, QByteArray*> *>(value);
        for(auto itemkey: items->keys()) {
            ::SWGSDRangel::toJsonValue(itemkey, items->value(itemkey), &mapobj, innerType);
        }
    }
    else if(QStringLiteral("qint32").compare(innerType) == 0) {
        auto items = reinterpret_cast< QMap<QString, qint32> *>(value);
        for(auto itemkey: items->keys()) {
            auto val = items->value(itemkey);
            ::SWGSDRangel::toJsonValue(itemkey, &val, &mapobj, innerType);
        }
    }
    else if(QStringLiteral("qint64").compare(innerType) == 0) {
        auto items = reinterpret_cast< QMap<QString, qint64> *>(value);
        for(auto itemkey: items->keys()) {
            auto val = items->value(itemkey);
            ::SWGSDRangel::toJsonValue(itemkey, &val, &mapobj, innerType);
        }
    }
    else if(QStringLiteral("bool").compare(innerType) == 0) {
        auto items = reinterpret_cast< QMap<QString, bool> *>(value);
        for(auto itemkey: items->keys()) {
            auto val = items->value(itemkey);
            ::SWGSDRangel::toJsonValue(itemkey, &val, &mapobj, innerType);
        }
    }
    else if(QStringLiteral("float").compare(innerType) == 0) {
        auto items = reinterpret_cast< QMap<QString, float> *>(value);
        for(auto itemkey: items->keys()) {
            auto val = items->value(itemkey);
            ::SWGSDRangel::toJsonValue(itemkey, &val, &mapobj, innerType);
        }
    }
    else if(QStringLiteral("double").compare(innerType) == 0) {
        auto items = reinterpret_cast< QMap<QString, double> *>(value);
        for(auto itemkey: items->keys() ) {
            auto val = items->value(itemkey);
            ::SWGSDRangel::toJsonValue(itemkey, &val, &mapobj, innerType);
        }
    }
    output->insert(innerName, mapobj);
}

QString
stringValue(QString* value) {
    QString* str = static_cast<QString*>(value);
    return QString(*str);
}

QString
stringValue(qint32 value) {
    return QString::number(value);
}

QString
stringValue(qint64 value) {
    return QString::number(value);
}

QString
stringValue(bool value) {
    return QString(value ? "true" : "false");
}

}
