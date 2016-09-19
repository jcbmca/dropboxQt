/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingMemberSelector.h"
#include "dropbox/sharing/SharingMemberSelector.h"

namespace dropboxQt{
namespace sharing{
    class RemoveFileMemberArg{
        /**
            Arguments for :meth:`remove_file_member_2`.

            field: file: File from which to remove members.
            field: member: Member to remove from this file. Note that even if an
                email is specified, it may result in the removal of a user (not
                an invitee) if the user's main account corresponds to that email
                address.
        */

    public:
        RemoveFileMemberArg(){};

        RemoveFileMemberArg(const QString& arg){ m_file = arg; };

    public:
        ///File from which to remove members.
        QString file()const{return m_file;};
        const RemoveFileMemberArg& setFile(const QString& arg){m_file=arg; return *this;};

        ///Member to remove from this file. Note that even if an email is specified, it may result in the removal of a user (not an invitee) if the user's main account corresponds to that email address.
        MemberSelector member()const{return m_member;};
        const RemoveFileMemberArg& setMember(const MemberSelector& arg){m_member=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RemoveFileMemberArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///File from which to remove members.
        QString m_file;

        ///Member to remove from this file. Note that even if an email is specified, it may result in the removal of a user (not an invitee) if the user's main account corresponds to that email address.
        MemberSelector m_member;

    };//RemoveFileMemberArg

}//sharing
}//dropboxQt