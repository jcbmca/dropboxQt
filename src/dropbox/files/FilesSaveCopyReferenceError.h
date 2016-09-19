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
    class SaveCopyReferenceError{
        /**
            field: invalid_copy_reference: The copy reference is invalid.
            field: no_permission: You don't have permission to save the given
                copy reference. Please make sure this app is same app which
                created the copy reference and the source user is still linked
                to the app.
            field: not_found: The file referenced by the copy reference cannot
                be found.
            field: too_many_files: The operation would involve more than 10,000
                files and folders.
        */
    public:
        enum Tag{

		/*None*/
		SaveCopyReferenceError_PATH,
		/*The copy reference is invalid.*/
		SaveCopyReferenceError_INVALID_COPY_REFERENCE,
		/*You don't have permission to save the given copy reference. Please make sure this app is same app which created the copy reference and the source user is still linked to the app.*/
		SaveCopyReferenceError_NO_PERMISSION,
		/*The file referenced by the copy reference cannot be found.*/
		SaveCopyReferenceError_NOT_FOUND,
		/*The operation would involve more than 10,000 files and folders.*/
		SaveCopyReferenceError_TOO_MANY_FILES,
		/*None*/
		SaveCopyReferenceError_OTHER
        };

        SaveCopyReferenceError(){}
        SaveCopyReferenceError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        WriteError getPath()const{DBOX_CHECK_STATE((SaveCopyReferenceError_PATH == m_tag), "expected tag: SaveCopyReferenceError_PATH", m_tag);return m_path;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SaveCopyReferenceError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        WriteError m_path;
    };//SaveCopyReferenceError

}//files
}//dropboxQt