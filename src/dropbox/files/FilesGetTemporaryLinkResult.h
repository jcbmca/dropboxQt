/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesFileMetadata.h"

namespace dropboxQt{
namespace files{
    class GetTemporaryLinkResult{
        /**
            field: metadata: Metadata of the file.
            field: link: The temporary link which can be used to stream content
                the file.
        */

    public:
        GetTemporaryLinkResult(){};

        GetTemporaryLinkResult(const FileMetadata& arg){ m_metadata = arg; };

    public:
        ///Metadata of the file.
        FileMetadata metadata()const{return m_metadata;};

        ///The temporary link which can be used to stream content the file.
        QString link()const{return m_link;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetTemporaryLinkResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Metadata of the file.
        FileMetadata m_metadata;

        ///The temporary link which can be used to stream content the file.
        QString m_link;

    };//GetTemporaryLinkResult

}//files
}//dropboxQt