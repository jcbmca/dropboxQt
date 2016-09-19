/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupMembersRemoveArg.h"

namespace dropboxQt{

namespace team{
///GroupMembersRemoveArg

GroupMembersRemoveArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupMembersRemoveArg::toJson(QJsonObject& js)const{

    IncludeMembersArg::toJson(js);
    m_group.toJson(js, "group");
    js["users"] = struct_list2jsonarray(m_users);
}

void GroupMembersRemoveArg::fromJson(const QJsonObject& js){

    IncludeMembersArg::fromJson(js);
    m_group.fromJson(js["group"].toObject());
    jsonarray2struct_list(js["users"].toArray(), m_users);
}

QString GroupMembersRemoveArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupMembersRemoveArg GroupMembersRemoveArg::EXAMPLE(){
    GroupMembersRemoveArg rv;
    rv.group = team::GroupSelector::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt