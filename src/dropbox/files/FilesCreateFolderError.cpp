/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesCreateFolderError.h"

namespace dropboxQt{

namespace files{
///CreateFolderError

CreateFolderError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void CreateFolderError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case CreateFolderError_PATH:{
            if(!name.isEmpty())
                js[name] = "path";
            m_path.toJson(js, "path");
        }break;
    }//switch
}

void CreateFolderError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = CreateFolderError_PATH;
    }
}

QString CreateFolderError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "CreateFolderError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
CreateFolderError CreateFolderError::EXAMPLE(){
    CreateFolderError rv;
    rv.path = files::WriteError::EXAMPLE();
    rv.m_tag = CreateFolderError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt