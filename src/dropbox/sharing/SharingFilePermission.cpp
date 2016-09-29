/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
 www.prokarpaty.net
 29, Sep 2016
***********************************************************/

#include "dropbox/sharing/SharingFilePermission.h"

namespace dropboxQt{

namespace sharing{
///FilePermission

FilePermission::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void FilePermission::toJson(QJsonObject& js)const{

    m_action.toJson(js, "action");
    js["allow"] = m_allow;
    m_reason.toJson(js, "reason");
}

void FilePermission::fromJson(const QJsonObject& js){

    m_action.fromJson(js["action"].toObject());
    m_allow = js["allow"].toVariant().toBool();
    m_reason.fromJson(js["reason"].toObject());
}

QString FilePermission::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<FilePermission>  FilePermission::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<FilePermission>  FilePermission::factory::create(const QJsonObject& js)
{
    std::unique_ptr<FilePermission> rv;
    rv = std::unique_ptr<FilePermission>(new FilePermission);
    rv->fromJson(js);
    return rv;
}

}//sharing
}//dropboxQt
