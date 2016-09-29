/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
 www.prokarpaty.net
 29, Sep 2016
***********************************************************/

#include "dropbox/team/TeamMembersListResult.h"

namespace dropboxQt{

namespace team{
///MembersListResult

MembersListResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MembersListResult::toJson(QJsonObject& js)const{

    js["members"] = struct_list2jsonarray(m_members);
    if(!m_cursor.isEmpty())
        js["cursor"] = QString(m_cursor);
    js["has_more"] = m_has_more;
}

void MembersListResult::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["members"].toArray(), m_members);
    m_cursor = js["cursor"].toString();
    m_has_more = js["has_more"].toVariant().toBool();
}

QString MembersListResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<MembersListResult>  MembersListResult::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<MembersListResult>  MembersListResult::factory::create(const QJsonObject& js)
{
    std::unique_ptr<MembersListResult> rv;
    rv = std::unique_ptr<MembersListResult>(new MembersListResult);
    rv->fromJson(js);
    return rv;
}

}//team
}//dropboxQt
