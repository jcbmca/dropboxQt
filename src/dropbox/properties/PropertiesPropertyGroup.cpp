/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "properties"
 Part of "Ardi - the organizer" project.
 osoft4ardi@gmail.com
 www.prokarpaty.net
***********************************************************/

#include "dropbox/properties/PropertiesPropertyGroup.h"
using namespace dropboxQt;

namespace dropboxQt{

namespace properties{
///PropertyGroup

PropertyGroup::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void PropertyGroup::toJson(QJsonObject& js)const{

    if(!m_template_id.isEmpty())
        js["template_id"] = QString(m_template_id);
    js["fields"] = struct_list2jsonarray(m_fields);
}

void PropertyGroup::fromJson(const QJsonObject& js){

    m_template_id = js["template_id"].toString();
    jsonarray2struct_list(js["fields"].toArray(), m_fields);
}

QString PropertyGroup::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<PropertyGroup>  PropertyGroup::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<PropertyGroup>  PropertyGroup::factory::create(const QJsonObject& js)
{
    std::unique_ptr<PropertyGroup> rv;
    rv = std::unique_ptr<PropertyGroup>(new PropertyGroup);
    rv->fromJson(js);
    return rv;
}

}//properties
}//dropboxQt
