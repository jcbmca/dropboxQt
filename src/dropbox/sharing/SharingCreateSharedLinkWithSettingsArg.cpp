/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
 www.prokarpaty.net
***********************************************************/

#include "dropbox/sharing/SharingCreateSharedLinkWithSettingsArg.h"

namespace dropboxQt{

namespace sharing{
///CreateSharedLinkWithSettingsArg

CreateSharedLinkWithSettingsArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void CreateSharedLinkWithSettingsArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = QString(m_path);
    js["settings"] = (QJsonObject)m_settings;
}

void CreateSharedLinkWithSettingsArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
    m_settings.fromJson(js);
}

QString CreateSharedLinkWithSettingsArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<CreateSharedLinkWithSettingsArg>  CreateSharedLinkWithSettingsArg::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<CreateSharedLinkWithSettingsArg>  CreateSharedLinkWithSettingsArg::factory::create(const QJsonObject& js)
{
    std::unique_ptr<CreateSharedLinkWithSettingsArg> rv;
    rv = std::unique_ptr<CreateSharedLinkWithSettingsArg>(new CreateSharedLinkWithSettingsArg);
    rv->fromJson(js);
    return rv;
}

}//sharing
}//dropboxQt
