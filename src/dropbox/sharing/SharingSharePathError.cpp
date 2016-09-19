/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingSharePathError.h"

namespace dropboxQt{

namespace sharing{
///SharePathError

SharePathError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SharePathError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case SharePathError_IS_FILE:{
            if(!name.isEmpty())
                js[name] = "is_file";
        }break;
        case SharePathError_INSIDE_SHARED_FOLDER:{
            if(!name.isEmpty())
                js[name] = "inside_shared_folder";
        }break;
        case SharePathError_CONTAINS_SHARED_FOLDER:{
            if(!name.isEmpty())
                js[name] = "contains_shared_folder";
        }break;
        case SharePathError_IS_APP_FOLDER:{
            if(!name.isEmpty())
                js[name] = "is_app_folder";
        }break;
        case SharePathError_INSIDE_APP_FOLDER:{
            if(!name.isEmpty())
                js[name] = "inside_app_folder";
        }break;
        case SharePathError_IS_PUBLIC_FOLDER:{
            if(!name.isEmpty())
                js[name] = "is_public_folder";
        }break;
        case SharePathError_INSIDE_PUBLIC_FOLDER:{
            if(!name.isEmpty())
                js[name] = "inside_public_folder";
        }break;
        case SharePathError_ALREADY_SHARED:{
            if(!name.isEmpty())
                js[name] = "already_shared";
            js["already_shared"] = (QJsonObject)m_already_shared;
        }break;
        case SharePathError_INVALID_PATH:{
            if(!name.isEmpty())
                js[name] = "invalid_path";
        }break;
        case SharePathError_IS_OSX_PACKAGE:{
            if(!name.isEmpty())
                js[name] = "is_osx_package";
        }break;
        case SharePathError_INSIDE_OSX_PACKAGE:{
            if(!name.isEmpty())
                js[name] = "inside_osx_package";
        }break;
        case SharePathError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void SharePathError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("is_file") == 0){
        m_tag = SharePathError_IS_FILE;
    }
    if(s.compare("inside_shared_folder") == 0){
        m_tag = SharePathError_INSIDE_SHARED_FOLDER;
    }
    if(s.compare("contains_shared_folder") == 0){
        m_tag = SharePathError_CONTAINS_SHARED_FOLDER;
    }
    if(s.compare("is_app_folder") == 0){
        m_tag = SharePathError_IS_APP_FOLDER;
    }
    if(s.compare("inside_app_folder") == 0){
        m_tag = SharePathError_INSIDE_APP_FOLDER;
    }
    if(s.compare("is_public_folder") == 0){
        m_tag = SharePathError_IS_PUBLIC_FOLDER;
    }
    if(s.compare("inside_public_folder") == 0){
        m_tag = SharePathError_INSIDE_PUBLIC_FOLDER;
    }
    if(s.compare("already_shared") == 0){
        m_tag = SharePathError_ALREADY_SHARED;
    }
    if(s.compare("invalid_path") == 0){
        m_tag = SharePathError_INVALID_PATH;
    }
    if(s.compare("is_osx_package") == 0){
        m_tag = SharePathError_IS_OSX_PACKAGE;
    }
    if(s.compare("inside_osx_package") == 0){
        m_tag = SharePathError_INSIDE_OSX_PACKAGE;
    }
    if(s.compare("other") == 0){
        m_tag = SharePathError_OTHER;
    }
}

QString SharePathError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SharePathError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SharePathError SharePathError::EXAMPLE(){
    SharePathError rv;
    rv.already_shared = sharing::SharedFolderMetadata::EXAMPLE();
    rv.m_tag = SharePathError_IS_FILE;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt