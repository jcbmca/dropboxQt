/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingCreateSharedLinkError.h"

namespace dropboxQt{

namespace sharing{
///CreateSharedLinkError

CreateSharedLinkError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void CreateSharedLinkError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case CreateSharedLinkError_PATH:{
            if(!name.isEmpty())
                js[name] = "path";
            m_path.toJson(js, "path");
        }break;
        case CreateSharedLinkError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void CreateSharedLinkError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = CreateSharedLinkError_PATH;
    }
    if(s.compare("other") == 0){
        m_tag = CreateSharedLinkError_OTHER;
    }
}

QString CreateSharedLinkError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "CreateSharedLinkError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
CreateSharedLinkError CreateSharedLinkError::EXAMPLE(){
    CreateSharedLinkError rv;
    rv.path = files::LookupError::EXAMPLE();
    rv.m_tag = CreateSharedLinkError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt