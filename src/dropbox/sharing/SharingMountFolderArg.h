/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
 www.prokarpaty.net
 29, Sep 2016
***********************************************************/

#pragma once
#include "dropbox/endpoint/ApiUtil.h"

namespace dropboxQt{
namespace sharing{
    class MountFolderArg{
        /**
            field: shared_folder_id: The ID of the shared folder to mount.
        */

    public:
        MountFolderArg(){};

        MountFolderArg(const QString& arg){ m_shared_folder_id = arg; };

    public:
            /**
                The ID of the shared folder to mount.
            */
        QString sharedFolderId()const{return m_shared_folder_id;};
        MountFolderArg& setSharedfolderid(const QString& arg){m_shared_folder_id=arg;return *this;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<MountFolderArg>  create(const QByteArray& data);
            static std::unique_ptr<MountFolderArg>  create(const QJsonObject& js);
        };




    protected:
            /**
                The ID of the shared folder to mount.
            */
        QString m_shared_folder_id;

    };//MountFolderArg

}//sharing
}//dropboxQt
