/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesWriteError.h"
#include "dropbox/files/FilesWriteError.h"

namespace dropboxQt{
namespace files{
    class UploadWriteFailed{
        /**
            field: reason: The reason why the file couldn't be saved.
            field: upload_session_id: The upload session ID; this may be used to
                retry the commit.
        */

    public:
        UploadWriteFailed(){};

        UploadWriteFailed(const WriteError& arg){ m_reason = arg; };

    public:
        ///The reason why the file couldn't be saved.
        WriteError reason()const{return m_reason;};
        const UploadWriteFailed& setReason(const WriteError& arg){m_reason=arg; return *this;};

        ///The upload session ID; this may be used to retry the commit.
        QString uploadSessionId()const{return m_upload_session_id;};
        const UploadWriteFailed& setUploadsessionid(const QString& arg){m_upload_session_id=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UploadWriteFailed EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The reason why the file couldn't be saved.
        WriteError m_reason;

        ///The upload session ID; this may be used to retry the commit.
        QString m_upload_session_id;

    };//UploadWriteFailed

}//files
}//dropboxQt