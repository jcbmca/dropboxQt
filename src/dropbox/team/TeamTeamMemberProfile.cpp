/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
 www.prokarpaty.net
 29, Sep 2016
***********************************************************/

#include "dropbox/team/TeamTeamMemberProfile.h"

namespace dropboxQt{

namespace team{
///TeamMemberProfile

TeamMemberProfile::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void TeamMemberProfile::toJson(QJsonObject& js)const{

    MemberProfile::toJson(js);
    js["groups"] = ingrl_list2jsonarray(m_groups);
}

void TeamMemberProfile::fromJson(const QJsonObject& js){

    MemberProfile::fromJson(js);
    jsonarray2ingrl_list(js["groups"].toArray(), m_groups);
}

QString TeamMemberProfile::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<TeamMemberProfile>  TeamMemberProfile::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<TeamMemberProfile>  TeamMemberProfile::factory::create(const QJsonObject& js)
{
    std::unique_ptr<TeamMemberProfile> rv;
    rv = std::unique_ptr<TeamMemberProfile>(new TeamMemberProfile);
    rv->fromJson(js);
    return rv;
}

}//team
}//dropboxQt
