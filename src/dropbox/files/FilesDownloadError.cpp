/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesDownloadError.h"

namespace dropboxQt{

namespace files{
///DownloadError

DownloadError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void DownloadError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case DownloadError_PATH:{
            if(!name.isEmpty())
                js[name] = "path";
            m_path.toJson(js, "path");
        }break;
        case DownloadError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void DownloadError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = DownloadError_PATH;
    }
    if(s.compare("other") == 0){
        m_tag = DownloadError_OTHER;
    }
}

QString DownloadError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "DownloadError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
DownloadError DownloadError::EXAMPLE(){
    DownloadError rv;
    rv.path = files::LookupError::EXAMPLE();
    rv.m_tag = DownloadError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt