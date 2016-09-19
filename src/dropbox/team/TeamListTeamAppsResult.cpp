/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamListTeamAppsResult.h"

namespace dropboxQt{

namespace team{
///ListTeamAppsResult

ListTeamAppsResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListTeamAppsResult::toJson(QJsonObject& js)const{

    js["apps"] = struct_list2jsonarray(m_apps);
    js["has_more"] = m_has_more;
    if(!m_cursor.isEmpty())
        js["cursor"] = m_cursor;
}

void ListTeamAppsResult::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["apps"].toArray(), m_apps);
    m_has_more = js["has_more"].toVariant().toBool();
    m_cursor = js["cursor"].toString();
}

QString ListTeamAppsResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListTeamAppsResult ListTeamAppsResult::EXAMPLE(){
    ListTeamAppsResult rv;
    rv.cursor = "test3value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt