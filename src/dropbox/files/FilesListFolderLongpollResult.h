/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class ListFolderLongpollResult{
        /**
            field: changes: Indicates whether new changes are available. If
                true, call :meth:`list_folder_continue` to retrieve the changes.
            field: backoff: If present, backoff for at least this many seconds
                before calling :meth:`list_folder_longpoll` again.
        */

    public:
        ListFolderLongpollResult(){};

        ListFolderLongpollResult(const bool& arg){ m_changes = arg; };

    public:
        ///Indicates whether new changes are available. If true, call :route:`list_folder/continue` to retrieve the changes.
        bool changes()const{return m_changes;};

        ///If present, backoff for at least this many seconds before calling :route:`list_folder/longpoll` again.
        int backoff()const{return m_backoff;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFolderLongpollResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Indicates whether new changes are available. If true, call :route:`list_folder/continue` to retrieve the changes.
        bool m_changes;

        ///If present, backoff for at least this many seconds before calling :route:`list_folder/longpoll` again.
        int m_backoff;

    };//ListFolderLongpollResult

}//files
}//dropboxQt