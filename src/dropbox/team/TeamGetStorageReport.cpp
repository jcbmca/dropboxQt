/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGetStorageReport.h"

namespace dropboxQt{

namespace team{
///GetStorageReport

GetStorageReport::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetStorageReport::toJson(QJsonObject& js)const{

    BaseDfbReport::toJson(js);
    js["total_usage"] = ingrl_list2jsonarray(m_total_usage);
    js["shared_usage"] = ingrl_list2jsonarray(m_shared_usage);
    js["unshared_usage"] = ingrl_list2jsonarray(m_unshared_usage);
    js["shared_folders"] = ingrl_list2jsonarray(m_shared_folders);
    js["member_storage_map"] = list_of_struct_list2jsonarray(m_member_storage_map);
}

void GetStorageReport::fromJson(const QJsonObject& js){

    BaseDfbReport::fromJson(js);
    jsonarray2ingrl_list(js["total_usage"].toArray(), m_total_usage);
    jsonarray2ingrl_list(js["shared_usage"].toArray(), m_shared_usage);
    jsonarray2ingrl_list(js["unshared_usage"].toArray(), m_unshared_usage);
    jsonarray2ingrl_list(js["shared_folders"].toArray(), m_shared_folders);
    jsonarray2list_of_struct_list(js["member_storage_map"].toArray(), m_member_storage_map);
}

QString GetStorageReport::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetStorageReport GetStorageReport::EXAMPLE(){
    GetStorageReport rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt