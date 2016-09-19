/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#include "dropbox/users/UsersName.h"

namespace dropboxQt{

namespace users{
///Name

Name::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void Name::toJson(QJsonObject& js)const{

    if(!m_given_name.isEmpty())
        js["given_name"] = m_given_name;
    if(!m_surname.isEmpty())
        js["surname"] = m_surname;
    if(!m_familiar_name.isEmpty())
        js["familiar_name"] = m_familiar_name;
    if(!m_display_name.isEmpty())
        js["display_name"] = m_display_name;
    if(!m_abbreviated_name.isEmpty())
        js["abbreviated_name"] = m_abbreviated_name;
}

void Name::fromJson(const QJsonObject& js){

    m_given_name = js["given_name"].toString();
    m_surname = js["surname"].toString();
    m_familiar_name = js["familiar_name"].toString();
    m_display_name = js["display_name"].toString();
    m_abbreviated_name = js["abbreviated_name"].toString();
}

QString Name::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
Name Name::EXAMPLE(){
    Name rv;
    rv.given_name = "test1value";
    rv.surname = "test2value";
    rv.familiar_name = "test3value";
    rv.display_name = "test4value";
    rv.abbreviated_name = "test5value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//users
}//dropboxQt