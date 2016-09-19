/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class Metadata{
        /**
            Metadata for a file or folder.

            field: name: The last component of the path (including extension).
                This never contains a slash.
            field: path_lower: The lowercased full path in the user's Dropbox.
                This always starts with a slash. This field will be null if the
                file or folder is not mounted.
            field: path_display: The cased path to be used for display purposes
                only. In rare instances the casing will not correctly match the
                user's filesystem, but this behavior will match the path
                provided in the Core API v1. Changes to the casing of paths
                won't be returned by :meth:`list_folder_continue`. This field
                will be null if the file or folder is not mounted.
            field: parent_shared_folder_id: Deprecated. Please use
                ``FileSharingInfo.parent_shared_folder_id`` or
                ``FolderSharingInfo.parent_shared_folder_id`` instead.
        */

    public:
        Metadata(){};

        Metadata(const QString& arg){ m_name = arg; };

    public:
        ///The last component of the path (including extension). This never contains a slash.
        QString name()const{return m_name;};
        const Metadata& setName(const QString& arg){m_name=arg; return *this;};

        ///The lowercased full path in the user's Dropbox. This always starts with a slash. This field will be null if the file or folder is not mounted.
        QString pathLower()const{return m_path_lower;};
        const Metadata& setPathlower(const QString& arg){m_path_lower=arg; return *this;};

        ///The cased path to be used for display purposes only. In rare instances the casing will not correctly match the user's filesystem, but this behavior will match the path provided in the Core API v1. Changes to the casing of paths won't be returned by :route:`list_folder/continue`. This field will be null if the file or folder is not mounted.
        QString pathDisplay()const{return m_path_display;};
        const Metadata& setPathdisplay(const QString& arg){m_path_display=arg; return *this;};

        ///Deprecated. Please use :field:`FileSharingInfo.parent_shared_folder_id` or :field:`FolderSharingInfo.parent_shared_folder_id` instead.
        QString parentSharedFolderId()const{return m_parent_shared_folder_id;};
        const Metadata& setParentsharedfolderid(const QString& arg){m_parent_shared_folder_id=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static Metadata EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The last component of the path (including extension). This never contains a slash.
        QString m_name;

        ///The lowercased full path in the user's Dropbox. This always starts with a slash. This field will be null if the file or folder is not mounted.
        QString m_path_lower;

        ///The cased path to be used for display purposes only. In rare instances the casing will not correctly match the user's filesystem, but this behavior will match the path provided in the Core API v1. Changes to the casing of paths won't be returned by :route:`list_folder/continue`. This field will be null if the file or folder is not mounted.
        QString m_path_display;

        ///Deprecated. Please use :field:`FileSharingInfo.parent_shared_folder_id` or :field:`FolderSharingInfo.parent_shared_folder_id` instead.
        QString m_parent_shared_folder_id;

    };//Metadata

}//files
}//dropboxQt