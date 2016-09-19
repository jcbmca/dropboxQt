/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharedLinkMetadata.h"

namespace dropboxQt{
namespace sharing{
    class FileLinkMetadata : public SharedLinkMetadata{
        /**
            The metadata of a file shared link

            field: client_modified: The modification time set by the desktop
                client when the file was added to Dropbox. Since this time is
                not verified (the Dropbox server stores whatever the desktop
                client sends up), this should only be used for display purposes
                (such as sorting) and not, for example, to determine if a file
                has changed or not.
            field: server_modified: The last time the file was modified on
                Dropbox.
            field: rev: A unique identifier for the current revision of a file.
                This field is the same rev as elsewhere in the API and can be
                used to detect changes and avoid conflicts.
            field: size: The file size in bytes.
        */

    public:
        FileLinkMetadata(){};

        FileLinkMetadata(const QDateTime& arg){ m_client_modified = arg; };

    public:
        ///The modification time set by the desktop client when the file was added to Dropbox. Since this time is not verified (the Dropbox server stores whatever the desktop client sends up), this should only be used for display purposes (such as sorting) and not, for example, to determine if a file has changed or not.
        QDateTime clientModified()const{return m_client_modified;};
        const FileLinkMetadata& setClientmodified(const QDateTime& arg){m_client_modified=arg; return *this;};

        ///The last time the file was modified on Dropbox.
        QDateTime serverModified()const{return m_server_modified;};
        const FileLinkMetadata& setServermodified(const QDateTime& arg){m_server_modified=arg; return *this;};

        ///A unique identifier for the current revision of a file. This field is the same rev as elsewhere in the API and can be used to detect changes and avoid conflicts.
        QString rev()const{return m_rev;};
        const FileLinkMetadata& setRev(const QString& arg){m_rev=arg; return *this;};

        ///The file size in bytes.
        int size()const{return m_size;};
        const FileLinkMetadata& setSize(const int& arg){m_size=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static FileLinkMetadata EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The modification time set by the desktop client when the file was added to Dropbox. Since this time is not verified (the Dropbox server stores whatever the desktop client sends up), this should only be used for display purposes (such as sorting) and not, for example, to determine if a file has changed or not.
        QDateTime m_client_modified;

        ///The last time the file was modified on Dropbox.
        QDateTime m_server_modified;

        ///A unique identifier for the current revision of a file. This field is the same rev as elsewhere in the API and can be used to detect changes and avoid conflicts.
        QString m_rev;

        ///The file size in bytes.
        int m_size;

    };//FileLinkMetadata

}//sharing
}//dropboxQt