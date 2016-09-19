/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class Visibility{
        /**
            Who can access a shared link. The most open visibility is
            ``public``. The default depends on many aspects, such as team and
            user preferences and shared folder settings.

            field: public: Anyone who has received the link can access it. No
                login required.
            field: team_only: Only members of the same team can access the link.
                Login is required.
            field: password: A link-specific password is required to access the
                link. Login is not required.
            field: team_and_password: Only members of the same team who have the
                link-specific password can access the link.
            field: shared_folder_only: Only members of the shared folder
                containing the linked file can access the link. Login is
                required.
        */
    public:
        enum Tag{

		/*Anyone who has received the link can access it. No login required.*/
		Visibility_PUBLIC,
		/*Only members of the same team can access the link. Login is required.*/
		Visibility_TEAM_ONLY,
		/*A link-specific password is required to access the link. Login is not required.*/
		Visibility_PASSWORD,
		/*Only members of the same team who have the link-specific password can access the link.*/
		Visibility_TEAM_AND_PASSWORD,
		/*Only members of the shared folder containing the linked file can access the link. Login is required.*/
		Visibility_SHARED_FOLDER_ONLY,
		/*None*/
		Visibility_OTHER
        };

        Visibility(){}
        Visibility(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static Visibility EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//Visibility

}//sharing
}//dropboxQt