/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
 www.prokarpaty.net
 29, Sep 2016
***********************************************************/

#include "dropbox/team/TeamGroupFullInfo.h"

namespace dropboxQt{

namespace team{
///GroupFullInfo

GroupFullInfo::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupFullInfo::toJson(QJsonObject& js)const{

    GroupSummary::toJson(js);
    js["members"] = struct_list2jsonarray(m_members);
    js["created"] = m_created;
}

void GroupFullInfo::fromJson(const QJsonObject& js){

    GroupSummary::fromJson(js);
    jsonarray2struct_list(js["members"].toArray(), m_members);
    m_created = js["created"].toVariant().toInt();
}

QString GroupFullInfo::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<GroupFullInfo>  GroupFullInfo::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<GroupFullInfo>  GroupFullInfo::factory::create(const QJsonObject& js)
{
    std::unique_ptr<GroupFullInfo> rv;
    rv = std::unique_ptr<GroupFullInfo>(new GroupFullInfo);
    rv->fromJson(js);
    return rv;
}

}//team
}//dropboxQt
