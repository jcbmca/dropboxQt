/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
 www.prokarpaty.net
 29, Sep 2016
***********************************************************/

#include "dropbox/files/FilesGetCopyReferenceArg.h"

namespace dropboxQt{

namespace files{
///GetCopyReferenceArg

GetCopyReferenceArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetCopyReferenceArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = QString(m_path);
}

void GetCopyReferenceArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
}

QString GetCopyReferenceArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<GetCopyReferenceArg>  GetCopyReferenceArg::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<GetCopyReferenceArg>  GetCopyReferenceArg::factory::create(const QJsonObject& js)
{
    std::unique_ptr<GetCopyReferenceArg> rv;
    rv = std::unique_ptr<GetCopyReferenceArg>(new GetCopyReferenceArg);
    rv->fromJson(js);
    return rv;
}

}//files
}//dropboxQt
