/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersAddJobStatus.h"

namespace dropboxQt{

namespace team{
///MembersAddJobStatus

MembersAddJobStatus::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void MembersAddJobStatus::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case PollResultBase_IN_PROGRESS:{
            if(!name.isEmpty())
                js[name] = "in_progress";
        }break;
        case MembersAddJobStatus_COMPLETE:{
            if(!name.isEmpty())
                js[name] = "complete";
            js["complete"] = struct_list2jsonarray(m_complete);
        }break;
        case MembersAddJobStatus_FAILED:{
            if(!name.isEmpty())
                js[name] = "failed";
            if(!m_failed.isEmpty())
                js["failed"] = m_failed;
        }break;
    }//switch
}

void MembersAddJobStatus::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("in_progress") == 0){
        m_tag = PollResultBase_IN_PROGRESS;
    }
    if(s.compare("complete") == 0){
        m_tag = MembersAddJobStatus_COMPLETE;
    }
    if(s.compare("failed") == 0){
        m_tag = MembersAddJobStatus_FAILED;
    }
}

QString MembersAddJobStatus::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "MembersAddJobStatus");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersAddJobStatus MembersAddJobStatus::EXAMPLE(){
    MembersAddJobStatus rv;
    rv.failed = "test2value";
    rv.m_tag = MembersAddJobStatus_COMPLETE;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt