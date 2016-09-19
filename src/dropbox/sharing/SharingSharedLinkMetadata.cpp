/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingSharedLinkMetadata.h"

namespace dropboxQt{

namespace sharing{
///SharedLinkMetadata

SharedLinkMetadata::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void SharedLinkMetadata::toJson(QJsonObject& js)const{

    if(!m_url.isEmpty())
        js["url"] = m_url;
    if(!m_id.isEmpty())
        js["id"] = m_id;
    if(!m_name.isEmpty())
        js["name"] = m_name;
    if(m_expires.isValid())
        js["expires"] = m_expires.toString("yyyy-MM-ddThh:mm:ssZ");
    if(!m_path_lower.isEmpty())
        js["path_lower"] = m_path_lower;
    js["link_permissions"] = (QJsonObject)m_link_permissions;
    js["team_member_info"] = (QJsonObject)m_team_member_info;
    js["content_owner_team_info"] = (QJsonObject)m_content_owner_team_info;
}

void SharedLinkMetadata::fromJson(const QJsonObject& js){

    m_url = js["url"].toString();
    m_id = js["id"].toString();
    m_name = js["name"].toString();
    m_expires = QDateTime::fromString(js["expires"].toString(), "yyyy-MM-ddThh:mm:ssZ");
    m_path_lower = js["path_lower"].toString();
    m_link_permissions.fromJson(js);
    m_team_member_info.fromJson(js);
    m_content_owner_team_info.fromJson(js);
}

QString SharedLinkMetadata::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SharedLinkMetadata SharedLinkMetadata::EXAMPLE(){
    SharedLinkMetadata rv;
    rv.url = "test1value";
    rv.id = "test2value";
    rv.name = "test3value";
    rv.expires = QDateTime::currentDateTime();
    rv.path_lower = "test5value";
    rv.link_permissions = sharing::LinkPermissions::EXAMPLE();
    rv.team_member_info = sharing::TeamMemberInfo::EXAMPLE();
    rv.content_owner_team_info = users::Team::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt