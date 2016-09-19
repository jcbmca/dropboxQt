/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class ListMembersDevicesArg{
        /**
            field: cursor: At the first call to the
                :meth:`devices_list_members_devices` the cursor shouldn't be
                passed. Then, if the result of the call includes a cursor, the
                following requests should include the received cursors in order
                to receive the next sub list of team devices
            field: include_web_sessions: Whether to list web sessions of the
                team members
            field: include_desktop_clients: Whether to list desktop clients of
                the team members
            field: include_mobile_clients: Whether to list mobile clients of the
                team members
        */

    public:
        ListMembersDevicesArg():
        m_include_web_sessions(false)
        ,m_include_desktop_clients(false)
        ,m_include_mobile_clients(false)
        {};

        ListMembersDevicesArg(const QString& arg):
        m_include_web_sessions(false)
        ,m_include_desktop_clients(false)
        ,m_include_mobile_clients(false)
        { m_cursor = arg; };

    public:
        ///At the first call to the :route:`devices/list_members_devices` the cursor shouldn't be passed. Then, if the result of the call includes a cursor, the following requests should include the received cursors in order to receive the next sub list of team devices
        QString cursor()const{return m_cursor;};
        const ListMembersDevicesArg& setCursor(const QString& arg){m_cursor=arg; return *this;};

        ///Whether to list web sessions of the team members
        bool includeWebSessions()const{return m_include_web_sessions;};
        const ListMembersDevicesArg& setIncludewebsessions(const bool& arg){m_include_web_sessions=arg; return *this;};

        ///Whether to list desktop clients of the team members
        bool includeDesktopClients()const{return m_include_desktop_clients;};
        const ListMembersDevicesArg& setIncludedesktopclients(const bool& arg){m_include_desktop_clients=arg; return *this;};

        ///Whether to list mobile clients of the team members
        bool includeMobileClients()const{return m_include_mobile_clients;};
        const ListMembersDevicesArg& setIncludemobileclients(const bool& arg){m_include_mobile_clients=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListMembersDevicesArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///At the first call to the :route:`devices/list_members_devices` the cursor shouldn't be passed. Then, if the result of the call includes a cursor, the following requests should include the received cursors in order to receive the next sub list of team devices
        QString m_cursor;

        ///Whether to list web sessions of the team members
        bool m_include_web_sessions;

        ///Whether to list desktop clients of the team members
        bool m_include_desktop_clients;

        ///Whether to list mobile clients of the team members
        bool m_include_mobile_clients;

    };//ListMembersDevicesArg

}//team
}//dropboxQt