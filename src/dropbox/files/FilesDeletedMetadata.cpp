/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
 www.prokarpaty.net
 29, Sep 2016
***********************************************************/

#include "dropbox/files/FilesDeletedMetadata.h"

namespace dropboxQt{

namespace files{
///DeletedMetadata

DeletedMetadata::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void DeletedMetadata::toJson(QJsonObject& js)const{

    Metadata::toJson(js);
}

void DeletedMetadata::fromJson(const QJsonObject& js){

    Metadata::fromJson(js);
}

QString DeletedMetadata::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<DeletedMetadata>  DeletedMetadata::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<DeletedMetadata>  DeletedMetadata::factory::create(const QJsonObject& js)
{
    std::unique_ptr<DeletedMetadata> rv;
    rv = std::unique_ptr<DeletedMetadata>(new DeletedMetadata);
    rv->fromJson(js);
    return rv;
}

}//files
}//dropboxQt
