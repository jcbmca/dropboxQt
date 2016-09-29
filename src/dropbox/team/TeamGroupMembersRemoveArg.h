/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
 www.prokarpaty.net
 29, Sep 2016
***********************************************************/

#pragma once
#include "dropbox/endpoint/ApiUtil.h"
#include "dropbox/team/TeamIncludeMembersArg.h"
#include "dropbox/team/TeamGroupSelector.h"
#include "dropbox/team/TeamUserSelectorArg.h"

namespace dropboxQt{
namespace team{
    class GroupMembersRemoveArg : public IncludeMembersArg{
        /**
            field: group: Group from which users will be removed.
            field: users: List of users to be removed from the group.
        */

    public:
        GroupMembersRemoveArg(){};

        GroupMembersRemoveArg(const GroupSelector& arg){ m_group = arg; };

    public:
            /**
                Group from which users will be removed.
            */
        GroupSelector group()const{return m_group;};
        GroupMembersRemoveArg& setGroup(const GroupSelector& arg){m_group=arg;return *this;};

            /**
                List of users to be removed from the group.
            */
        const std::list <UserSelectorArg>& users()const{return m_users;};
        GroupMembersRemoveArg& setUsers(const std::list <UserSelectorArg>& arg){m_users=arg;return *this;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<GroupMembersRemoveArg>  create(const QByteArray& data);
            static std::unique_ptr<GroupMembersRemoveArg>  create(const QJsonObject& js);
        };




    protected:
            /**
                Group from which users will be removed.
            */
        GroupSelector m_group;

            /**
                List of users to be removed from the group.
            */
        std::list <UserSelectorArg> m_users;

    };//GroupMembersRemoveArg

}//team
}//dropboxQt
