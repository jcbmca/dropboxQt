/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMobileClientSession.h"

namespace dropboxQt{

namespace team{
///MobileClientSession

MobileClientSession::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MobileClientSession::toJson(QJsonObject& js)const{

    DeviceSession::toJson(js);
    if(!m_device_name.isEmpty())
        js["device_name"] = m_device_name;
    m_client_type.toJson(js, "client_type");
    if(!m_client_version.isEmpty())
        js["client_version"] = m_client_version;
    if(!m_os_version.isEmpty())
        js["os_version"] = m_os_version;
    if(!m_last_carrier.isEmpty())
        js["last_carrier"] = m_last_carrier;
}

void MobileClientSession::fromJson(const QJsonObject& js){

    DeviceSession::fromJson(js);
    m_device_name = js["device_name"].toString();
    m_client_type.fromJson(js["client_type"].toObject());
    m_client_version = js["client_version"].toString();
    m_os_version = js["os_version"].toString();
    m_last_carrier = js["last_carrier"].toString();
}

QString MobileClientSession::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MobileClientSession MobileClientSession::EXAMPLE(){
    MobileClientSession rv;
    rv.device_name = "test1value";
    rv.client_type = team::MobileClientPlatform::EXAMPLE();
    rv.client_version = "test3value";
    rv.os_version = "test4value";
    rv.last_carrier = "test5value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt