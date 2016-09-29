/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
 www.prokarpaty.net
 29, Sep 2016
***********************************************************/

#include "dropbox/users/UsersTeam.h"

namespace dropboxQt{

namespace users{
///Team

Team::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void Team::toJson(QJsonObject& js)const{

    if(!m_id.isEmpty())
        js["id"] = QString(m_id);
    if(!m_name.isEmpty())
        js["name"] = QString(m_name);
}

void Team::fromJson(const QJsonObject& js){

    m_id = js["id"].toString();
    m_name = js["name"].toString();
}

QString Team::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<Team>  Team::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<Team>  Team::factory::create(const QJsonObject& js)
{
    std::unique_ptr<Team> rv;
    rv = std::unique_ptr<Team>(new Team);
    rv->fromJson(js);
    return rv;
}

}//users
}//dropboxQt
