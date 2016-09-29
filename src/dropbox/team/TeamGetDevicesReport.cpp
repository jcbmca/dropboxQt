/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
 www.prokarpaty.net
 29, Sep 2016
***********************************************************/

#include "dropbox/team/TeamGetDevicesReport.h"

namespace dropboxQt{

namespace team{
///GetDevicesReport

GetDevicesReport::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetDevicesReport::toJson(QJsonObject& js)const{

    BaseDfbReport::toJson(js);
    js["active_1_day"] = (QJsonObject)m_active_1_day;
    js["active_7_day"] = (QJsonObject)m_active_7_day;
    js["active_28_day"] = (QJsonObject)m_active_28_day;
}

void GetDevicesReport::fromJson(const QJsonObject& js){

    BaseDfbReport::fromJson(js);
    m_active_1_day.fromJson(js);
    m_active_7_day.fromJson(js);
    m_active_28_day.fromJson(js);
}

QString GetDevicesReport::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<GetDevicesReport>  GetDevicesReport::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<GetDevicesReport>  GetDevicesReport::factory::create(const QJsonObject& js)
{
    std::unique_ptr<GetDevicesReport> rv;
    rv = std::unique_ptr<GetDevicesReport>(new GetDevicesReport);
    rv->fromJson(js);
    return rv;
}

}//team
}//dropboxQt
