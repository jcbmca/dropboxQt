/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupMembersChangeResult.h"

namespace dropboxQt{

namespace team{
///GroupMembersChangeResult

GroupMembersChangeResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupMembersChangeResult::toJson(QJsonObject& js)const{

    js["group_info"] = (QJsonObject)m_group_info;
    if(!m_async_job_id.isEmpty())
        js["async_job_id"] = m_async_job_id;
}

void GroupMembersChangeResult::fromJson(const QJsonObject& js){

    m_group_info.fromJson(js);
    m_async_job_id = js["async_job_id"].toString();
}

QString GroupMembersChangeResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupMembersChangeResult GroupMembersChangeResult::EXAMPLE(){
    GroupMembersChangeResult rv;
    rv.group_info = team::GroupFullInfo::EXAMPLE();
    rv.async_job_id = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt