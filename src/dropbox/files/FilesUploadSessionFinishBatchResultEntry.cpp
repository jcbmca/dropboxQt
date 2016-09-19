/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesUploadSessionFinishBatchResultEntry.h"

namespace dropboxQt{

namespace files{
///UploadSessionFinishBatchResultEntry

UploadSessionFinishBatchResultEntry::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void UploadSessionFinishBatchResultEntry::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case UploadSessionFinishBatchResultEntry_SUCCESS:{
            if(!name.isEmpty())
                js[name] = "success";
            js["success"] = (QJsonObject)m_success;
        }break;
        case UploadSessionFinishBatchResultEntry_FAILURE:{
            if(!name.isEmpty())
                js[name] = "failure";
            m_failure.toJson(js, "failure");
        }break;
    }//switch
}

void UploadSessionFinishBatchResultEntry::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("success") == 0){
        m_tag = UploadSessionFinishBatchResultEntry_SUCCESS;
    }
    if(s.compare("failure") == 0){
        m_tag = UploadSessionFinishBatchResultEntry_FAILURE;
    }
}

QString UploadSessionFinishBatchResultEntry::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "UploadSessionFinishBatchResultEntry");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UploadSessionFinishBatchResultEntry UploadSessionFinishBatchResultEntry::EXAMPLE(){
    UploadSessionFinishBatchResultEntry rv;
    rv.success = files::FileMetadata::EXAMPLE();
    rv.failure = files::UploadSessionFinishError::EXAMPLE();
    rv.m_tag = UploadSessionFinishBatchResultEntry_SUCCESS;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt