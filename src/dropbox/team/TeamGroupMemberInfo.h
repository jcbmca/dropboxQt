/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamMemberProfile.h"
#include "dropbox/team/TeamGroupAccessType.h"
#include "dropbox/team/TeamGroupAccessType.h"

namespace dropboxQt{
namespace team{
    class GroupMemberInfo{
        /**
            Profile of group member, and role in group.

            field: profile: Profile of group member.
            field: access_type: The role that the user has in the group.
        */

    public:
        GroupMemberInfo(){};

        GroupMemberInfo(const MemberProfile& arg){ m_profile = arg; };

    public:
        ///Profile of group member.
        MemberProfile profile()const{return m_profile;};
        const GroupMemberInfo& setProfile(const MemberProfile& arg){m_profile=arg; return *this;};

        ///The role that the user has in the group.
        GroupAccessType accessType()const{return m_access_type;};
        const GroupMemberInfo& setAccesstype(const GroupAccessType& arg){m_access_type=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupMemberInfo EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Profile of group member.
        MemberProfile m_profile;

        ///The role that the user has in the group.
        GroupAccessType m_access_type;

    };//GroupMemberInfo

}//team
}//dropboxQt