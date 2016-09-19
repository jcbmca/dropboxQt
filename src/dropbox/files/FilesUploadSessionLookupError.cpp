/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesUploadSessionLookupError.h"

namespace dropboxQt{

namespace files{
///UploadSessionLookupError

UploadSessionLookupError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void UploadSessionLookupError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case UploadSessionLookupError_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "not_found";
        }break;
        case UploadSessionLookupError_INCORRECT_OFFSET:{
            if(!name.isEmpty())
                js[name] = "incorrect_offset";
            js["incorrect_offset"] = (QJsonObject)m_incorrect_offset;
        }break;
        case UploadSessionLookupError_CLOSED:{
            if(!name.isEmpty())
                js[name] = "closed";
        }break;
        case UploadSessionLookupError_NOT_CLOSED:{
            if(!name.isEmpty())
                js[name] = "not_closed";
        }break;
        case UploadSessionLookupError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void UploadSessionLookupError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("not_found") == 0){
        m_tag = UploadSessionLookupError_NOT_FOUND;
    }
    if(s.compare("incorrect_offset") == 0){
        m_tag = UploadSessionLookupError_INCORRECT_OFFSET;
    }
    if(s.compare("closed") == 0){
        m_tag = UploadSessionLookupError_CLOSED;
    }
    if(s.compare("not_closed") == 0){
        m_tag = UploadSessionLookupError_NOT_CLOSED;
    }
    if(s.compare("other") == 0){
        m_tag = UploadSessionLookupError_OTHER;
    }
}

QString UploadSessionLookupError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "UploadSessionLookupError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UploadSessionLookupError UploadSessionLookupError::EXAMPLE(){
    UploadSessionLookupError rv;
    rv.incorrect_offset = files::UploadSessionOffsetError::EXAMPLE();
    rv.m_tag = UploadSessionLookupError_NOT_FOUND;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt