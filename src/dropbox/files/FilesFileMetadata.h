/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesMetadata.h"
#include "dropbox/files/FilesMediaInfo.h"
#include "dropbox/files/FilesMediaInfo.h"
#include "dropbox/files/FilesFileSharingInfo.h"
#include "dropbox/properties/PropertiesPropertyGroup.h"

namespace dropboxQt{
namespace files{
    class FileMetadata : public Metadata{
        /**
            field: id: A unique identifier for the file.
            field: client_modified: For files, this is the modification time set
                by the desktop client when the file was added to Dropbox. Since
                this time is not verified (the Dropbox server stores whatever
                the desktop client sends up), this should only be used for
                display purposes (such as sorting) and not, for example, to
                determine if a file has changed or not.
            field: server_modified: The last time the file was modified on
                Dropbox.
            field: rev: A unique identifier for the current revision of a file.
                This field is the same rev as elsewhere in the API and can be
                used to detect changes and avoid conflicts.
            field: size: The file size in bytes.
            field: media_info: Additional information if the file is a photo or
                video.
            field: sharing_info: Set if this file is contained in a shared
                folder.
            field: property_groups: Additional information if the file has
                custom properties with the property template specified.
            field: has_explicit_shared_members: This flag will only be present
                if include_has_explicit_shared_members  is true in
                :meth:`list_folder` or :meth:`get_metadata`. If this  flag is
                present, it will be true if this file has any explicit shared
                members. This is different from sharing_info in that this could
                be true  in the case where a file has explicit members but is
                not contained within  a shared folder.
        */

    public:
        FileMetadata(){};

        FileMetadata(const QString& arg){ m_id = arg; };

    public:
        ///A unique identifier for the file.
        QString id()const{return m_id;};
        const FileMetadata& setId(const QString& arg){m_id=arg; return *this;};

        ///For files, this is the modification time set by the desktop client when the file was added to Dropbox. Since this time is not verified (the Dropbox server stores whatever the desktop client sends up), this should only be used for display purposes (such as sorting) and not, for example, to determine if a file has changed or not.
        QDateTime clientModified()const{return m_client_modified;};
        const FileMetadata& setClientmodified(const QDateTime& arg){m_client_modified=arg; return *this;};

        ///The last time the file was modified on Dropbox.
        QDateTime serverModified()const{return m_server_modified;};
        const FileMetadata& setServermodified(const QDateTime& arg){m_server_modified=arg; return *this;};

        ///A unique identifier for the current revision of a file. This field is the same rev as elsewhere in the API and can be used to detect changes and avoid conflicts.
        QString rev()const{return m_rev;};
        const FileMetadata& setRev(const QString& arg){m_rev=arg; return *this;};

        ///The file size in bytes.
        int size()const{return m_size;};
        const FileMetadata& setSize(const int& arg){m_size=arg; return *this;};

        ///Additional information if the file is a photo or video.
        MediaInfo mediaInfo()const{return m_media_info;};
        const FileMetadata& setMediainfo(const MediaInfo& arg){m_media_info=arg; return *this;};

        ///Set if this file is contained in a shared folder.
        FileSharingInfo sharingInfo()const{return m_sharing_info;};
        const FileMetadata& setSharinginfo(const FileSharingInfo& arg){m_sharing_info=arg; return *this;};

        ///Additional information if the file has custom properties with the property template specified.
        const std::list <properties::PropertyGroup>& propertyGroups()const{return m_property_groups;};
        const FileMetadata& setPropertygroups(const std::list <properties::PropertyGroup>&& arg){m_property_groups=arg; return *this;};

        ///This flag will only be present if include_has_explicit_shared_members  is true in :route:`list_folder` or :route:`get_metadata`. If this  flag is present, it will be true if this file has any explicit shared  members. This is different from sharing_info in that this could be true  in the case where a file has explicit members but is not contained within  a shared folder.
        bool hasExplicitSharedMembers()const{return m_has_explicit_shared_members;};
        const FileMetadata& setHasexplicitsharedmembers(const bool& arg){m_has_explicit_shared_members=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static FileMetadata EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///A unique identifier for the file.
        QString m_id;

        ///For files, this is the modification time set by the desktop client when the file was added to Dropbox. Since this time is not verified (the Dropbox server stores whatever the desktop client sends up), this should only be used for display purposes (such as sorting) and not, for example, to determine if a file has changed or not.
        QDateTime m_client_modified;

        ///The last time the file was modified on Dropbox.
        QDateTime m_server_modified;

        ///A unique identifier for the current revision of a file. This field is the same rev as elsewhere in the API and can be used to detect changes and avoid conflicts.
        QString m_rev;

        ///The file size in bytes.
        int m_size;

        ///Additional information if the file is a photo or video.
        MediaInfo m_media_info;

        ///Set if this file is contained in a shared folder.
        FileSharingInfo m_sharing_info;

        ///Additional information if the file has custom properties with the property template specified.
        std::list <properties::PropertyGroup> m_property_groups;

        ///This flag will only be present if include_has_explicit_shared_members  is true in :route:`list_folder` or :route:`get_metadata`. If this  flag is present, it will be true if this file has any explicit shared  members. This is different from sharing_info in that this could be true  in the case where a file has explicit members but is not contained within  a shared folder.
        bool m_has_explicit_shared_members;

    };//FileMetadata

}//files
}//dropboxQt