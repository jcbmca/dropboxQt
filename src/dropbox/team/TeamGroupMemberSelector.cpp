/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
 www.prokarpaty.net
 29, Sep 2016
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


std::unique_ptr<GroupMemberSelector>  GroupMemberSelector::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<GroupMemberSelector>  GroupMemberSelector::factory::create(const QJsonObject& js)
{
    std::unique_ptr<GroupMemberSelector> rv;
    rv = std::unique_ptr<GroupMemberSelector>(new GroupMemberSelector);
    rv->fromJson(js);
    return rv;
}

}//team
}//dropboxQt
