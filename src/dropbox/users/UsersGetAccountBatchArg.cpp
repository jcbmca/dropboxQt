/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#include "dropbox/users/UsersGetAccountBatchArg.h"

namespace dropboxQt{

namespace users{
///GetAccountBatchArg

GetAccountBatchArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetAccountBatchArg::toJson(QJsonObject& js)const{

    js["account_ids"] = ingrl_list2jsonarray(m_account_ids);
}

void GetAccountBatchArg::fromJson(const QJsonObject& js){

    jsonarray2ingrl_list(js["account_ids"].toArray(), m_account_ids);
}

QString GetAccountBatchArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetAccountBatchArg GetAccountBatchArg::EXAMPLE(){
    GetAccountBatchArg rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//users
}//dropboxQt