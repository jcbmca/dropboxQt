/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class ListMemberDevicesError{
        /**
            field: member_not_found: Member not found.
        */
    public:
        enum Tag{

		/*Member not found.*/
		ListMemberDevicesError_MEMBER_NOT_FOUND,
		/*None*/
		ListMemberDevicesError_OTHER
        };

        ListMemberDevicesError(){}
        ListMemberDevicesError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListMemberDevicesError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//ListMemberDevicesError

}//team
}//dropboxQt