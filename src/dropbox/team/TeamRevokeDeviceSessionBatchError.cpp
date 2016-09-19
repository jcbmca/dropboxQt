/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamRevokeDeviceSessionBatchError.h"

namespace dropboxQt{

namespace team{
///RevokeDeviceSessionBatchError

RevokeDeviceSessionBatchError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void RevokeDeviceSessionBatchError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case RevokeDeviceSessionBatchError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void RevokeDeviceSessionBatchError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("other") == 0){
        m_tag = RevokeDeviceSessionBatchError_OTHER;
    }
}

QString RevokeDeviceSessionBatchError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "RevokeDeviceSessionBatchError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RevokeDeviceSessionBatchError RevokeDeviceSessionBatchError::EXAMPLE(){
    RevokeDeviceSessionBatchError rv;
    rv.m_tag = RevokeDeviceSessionBatchError_OTHER;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt