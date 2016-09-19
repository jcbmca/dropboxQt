/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingMemberAccessLevelResult.h"

namespace dropboxQt{
namespace sharing{
    class SharedFolderMemberError{
        /**
            field: invalid_dropbox_id: The target dropbox_id is invalid.
            field: not_a_member: The target dropbox_id is not a member of the
                shared folder.
            field: no_explicit_access: The target member only has inherited
                access to the shared folder.
        */
    public:
        enum Tag{

		/*The target dropbox_id is invalid.*/
		SharedFolderMemberError_INVALID_DROPBOX_ID,
		/*The target dropbox_id is not a member of the shared folder.*/
		SharedFolderMemberError_NOT_A_MEMBER,
		/*The target member only has inherited access to the shared folder.*/
		SharedFolderMemberError_NO_EXPLICIT_ACCESS,
		/*None*/
		SharedFolderMemberError_OTHER
        };

        SharedFolderMemberError(){}
        SharedFolderMemberError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///The target member only has inherited access to the shared folder.
        MemberAccessLevelResult getNoExplicitAccess()const{DBOX_CHECK_STATE((SharedFolderMemberError_NO_EXPLICIT_ACCESS == m_tag), "expected tag: SharedFolderMemberError_NO_EXPLICIT_ACCESS", m_tag);return m_no_explicit_access;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SharedFolderMemberError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        MemberAccessLevelResult m_no_explicit_access;
    };//SharedFolderMemberError

}//sharing
}//dropboxQt