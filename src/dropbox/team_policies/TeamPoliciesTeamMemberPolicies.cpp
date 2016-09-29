/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_policies"
 www.prokarpaty.net
 29, Sep 2016
***********************************************************/

#include "dropbox/team_policies/TeamPoliciesTeamMemberPolicies.h"

namespace dropboxQt{

namespace team_policies{
///TeamMemberPolicies

TeamMemberPolicies::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void TeamMemberPolicies::toJson(QJsonObject& js)const{

    js["sharing"] = (QJsonObject)m_sharing;
    m_emm_state.toJson(js, "emm_state");
}

void TeamMemberPolicies::fromJson(const QJsonObject& js){

    m_sharing.fromJson(js);
    m_emm_state.fromJson(js["emm_state"].toObject());
}

QString TeamMemberPolicies::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<TeamMemberPolicies>  TeamMemberPolicies::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<TeamMemberPolicies>  TeamMemberPolicies::factory::create(const QJsonObject& js)
{
    std::unique_ptr<TeamMemberPolicies> rv;
    rv = std::unique_ptr<TeamMemberPolicies>(new TeamMemberPolicies);
    rv->fromJson(js);
    return rv;
}

}//team_policies
}//dropboxQt
