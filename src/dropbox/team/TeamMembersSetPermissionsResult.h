/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamAdminTier.h"
#include "dropbox/team/TeamAdminTier.h"

namespace dropboxQt{
namespace team{
    class MembersSetPermissionsResult{
        /**
            field: team_member_id: The member ID of the user to which the change
                was applied.
            field: role: The role after the change.
        */

    public:
        MembersSetPermissionsResult(){};

        MembersSetPermissionsResult(const QString& arg){ m_team_member_id = arg; };

    public:
        ///The member ID of the user to which the change was applied.
        QString teamMemberId()const{return m_team_member_id;};

        ///The role after the change.
        AdminTier role()const{return m_role;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MembersSetPermissionsResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The member ID of the user to which the change was applied.
        QString m_team_member_id;

        ///The role after the change.
        AdminTier m_role;

    };//MembersSetPermissionsResult

}//team
}//dropboxQt