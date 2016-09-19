/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class PendingUploadMode{
        /**
            Flag to indicate pending upload default (for linking to
            not-yet-existing paths).

            field: file: Assume pending uploads are files.
            field: folder: Assume pending uploads are folders.
        */
    public:
        enum Tag{

		/*Assume pending uploads are files.*/
		PendingUploadMode_FILE,
		/*Assume pending uploads are folders.*/
		PendingUploadMode_FOLDER
        };

        PendingUploadMode(){}
        PendingUploadMode(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static PendingUploadMode EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//PendingUploadMode

}//sharing
}//dropboxQt