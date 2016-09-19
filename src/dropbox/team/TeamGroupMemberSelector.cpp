/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupMemberSelector.h"

namespace dropboxQt{

namespace team{
///GroupMemberSelector

GroupMemberSelector::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupMemberSelector::toJson(QJsonObject& js)const{

    m_group.toJson(js, "group");
    m_user.toJson(js, "user");
}

void GroupMemberSelector::fromJson(const QJsonObject& js){

    m_group.fromJson(js["group"].toObject());
    m_user.fromJson(js["user"].toObject());
}

QString GroupMemberSelector::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupMemberSelector GroupMemberSelector::EXAMPLE(){
    GroupMemberSelector rv;
    rv.group = team::GroupSelector::EXAMPLE();
    rv.user = team::UserSelectorArg::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt