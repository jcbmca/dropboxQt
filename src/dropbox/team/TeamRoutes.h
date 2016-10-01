/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
 www.prokarpaty.net
***********************************************************/

#pragma once

#include "dropbox/endpoint/ApiUtil.h"
#include "dropbox/team/TeamAddPropertyTemplateArg.h"
#include "dropbox/team/TeamAddPropertyTemplateResult.h"
#include "dropbox/team/TeamDateRange.h"
#include "dropbox/team/TeamDateRangeError.h"
#include "dropbox/team/TeamGetActivityReport.h"
#include "dropbox/team/TeamGetDevicesReport.h"
#include "dropbox/team/TeamGetMembershipReport.h"
#include "dropbox/properties/PropertiesGetPropertyTemplateArg.h"
#include "dropbox/properties/PropertiesGetPropertyTemplateResult.h"
#include "dropbox/team/TeamGetStorageReport.h"
#include "dropbox/team/TeamGroupCreateArg.h"
#include "dropbox/team/TeamGroupCreateError.h"
#include "dropbox/team/TeamGroupDeleteError.h"
#include "dropbox/team/TeamGroupFullInfo.h"
#include "dropbox/team/TeamGroupMemberSetAccessTypeError.h"
#include "dropbox/team/TeamGroupMembersAddArg.h"
#include "dropbox/team/TeamGroupMembersAddError.h"
#include "dropbox/team/TeamGroupMembersChangeResult.h"
#include "dropbox/team/TeamGroupMembersRemoveArg.h"
#include "dropbox/team/TeamGroupMembersRemoveError.h"
#include "dropbox/team/TeamGroupMembersSetAccessTypeArg.h"
#include "dropbox/team/TeamGroupSelector.h"
#include "dropbox/team/TeamGroupSelectorError.h"
#include "dropbox/team/TeamGroupUpdateArgs.h"
#include "dropbox/team/TeamGroupUpdateError.h"
#include "dropbox/team/TeamGroupsGetInfoError.h"
#include "dropbox/team/TeamGroupsGetInfoItem.h"
#include "dropbox/team/TeamGroupsListArg.h"
#include "dropbox/team/TeamGroupsListContinueArg.h"
#include "dropbox/team/TeamGroupsListContinueError.h"
#include "dropbox/team/TeamGroupsListResult.h"
#include "dropbox/team/TeamGroupsMembersListArg.h"
#include "dropbox/team/TeamGroupsMembersListContinueArg.h"
#include "dropbox/team/TeamGroupsMembersListContinueError.h"
#include "dropbox/team/TeamGroupsMembersListResult.h"
#include "dropbox/team/TeamGroupsPollError.h"
#include "dropbox/team/TeamGroupsSelector.h"
#include "dropbox/async/AsyncLaunchEmptyResult.h"
#include "dropbox/team/TeamListMemberAppsArg.h"
#include "dropbox/team/TeamListMemberAppsError.h"
#include "dropbox/team/TeamListMemberAppsResult.h"
#include "dropbox/team/TeamListMemberDevicesArg.h"
#include "dropbox/team/TeamListMemberDevicesError.h"
#include "dropbox/team/TeamListMemberDevicesResult.h"
#include "dropbox/team/TeamListMembersAppsArg.h"
#include "dropbox/team/TeamListMembersAppsError.h"
#include "dropbox/team/TeamListMembersAppsResult.h"
#include "dropbox/team/TeamListMembersDevicesArg.h"
#include "dropbox/team/TeamListMembersDevicesError.h"
#include "dropbox/team/TeamListMembersDevicesResult.h"
#include "dropbox/properties/PropertiesListPropertyTemplateIds.h"
#include "dropbox/team/TeamListTeamAppsArg.h"
#include "dropbox/team/TeamListTeamAppsError.h"
#include "dropbox/team/TeamListTeamAppsResult.h"
#include "dropbox/team/TeamListTeamDevicesArg.h"
#include "dropbox/team/TeamListTeamDevicesError.h"
#include "dropbox/team/TeamListTeamDevicesResult.h"
#include "dropbox/team/TeamMembersAddArg.h"
#include "dropbox/team/TeamMembersAddJobStatus.h"
#include "dropbox/team/TeamMembersAddLaunch.h"
#include "dropbox/team/TeamMembersDeactivateArg.h"
#include "dropbox/team/TeamMembersGetInfoArgs.h"
#include "dropbox/team/TeamMembersGetInfoError.h"
#include "dropbox/team/TeamMembersGetInfoItem.h"
#include "dropbox/team/TeamMembersListArg.h"
#include "dropbox/team/TeamMembersListContinueArg.h"
#include "dropbox/team/TeamMembersListContinueError.h"
#include "dropbox/team/TeamMembersListError.h"
#include "dropbox/team/TeamMembersListResult.h"
#include "dropbox/team/TeamMembersRecoverArg.h"
#include "dropbox/team/TeamMembersRecoverError.h"
#include "dropbox/team/TeamMembersRemoveArg.h"
#include "dropbox/team/TeamMembersRemoveError.h"
#include "dropbox/team/TeamMembersSendWelcomeError.h"
#include "dropbox/team/TeamMembersSetPermissionsArg.h"
#include "dropbox/team/TeamMembersSetPermissionsError.h"
#include "dropbox/team/TeamMembersSetPermissionsResult.h"
#include "dropbox/team/TeamMembersSetProfileArg.h"
#include "dropbox/team/TeamMembersSetProfileError.h"
#include "dropbox/team/TeamMembersSuspendError.h"
#include "dropbox/team/TeamMembersUnsuspendArg.h"
#include "dropbox/team/TeamMembersUnsuspendError.h"
#include "dropbox/properties/PropertiesModifyPropertyTemplateError.h"
#include "dropbox/async/AsyncPollArg.h"
#include "dropbox/async/AsyncPollEmptyResult.h"
#include "dropbox/async/AsyncPollError.h"
#include "dropbox/properties/PropertiesPropertyTemplateError.h"
#include "dropbox/team/TeamRevokeDeviceSessionArg.h"
#include "dropbox/team/TeamRevokeDeviceSessionBatchArg.h"
#include "dropbox/team/TeamRevokeDeviceSessionBatchError.h"
#include "dropbox/team/TeamRevokeDeviceSessionBatchResult.h"
#include "dropbox/team/TeamRevokeDeviceSessionError.h"
#include "dropbox/team/TeamRevokeLinkedApiAppArg.h"
#include "dropbox/team/TeamRevokeLinkedApiAppBatchArg.h"
#include "dropbox/team/TeamRevokeLinkedAppBatchError.h"
#include "dropbox/team/TeamRevokeLinkedAppBatchResult.h"
#include "dropbox/team/TeamRevokeLinkedAppError.h"
#include "dropbox/team/TeamTeamGetInfoResult.h"
#include "dropbox/team/TeamTeamMemberInfo.h"
#include "dropbox/team/TeamUpdatePropertyTemplateArg.h"
#include "dropbox/team/TeamUpdatePropertyTemplateResult.h"
#include "dropbox/team/TeamUserSelectorArg.h"

namespace dropboxQt{

class Endpoint;

namespace team{
    class TeamRoutes{
    public:
        TeamRoutes(Endpoint*);
            /**
            ApiRoute('alpha/groups/create')


            Creates a new, empty group, with a requested name. Permission : Team
            member management

            on error:GroupCreateError throws exception GroupCreateErrorException
            */
        std::unique_ptr<GroupFullInfo> alphaGroupsCreate(const GroupCreateArg& );

            /**
            ApiRoute('alpha/groups/get_info')


            Retrieves information about one or more groups. Permission : Team
            Information

            on error:GroupsGetInfoError throws exception GroupsGetInfoErrorException
            */
        std::list <GroupsGetInfoItem> alphaGroupsGetInfo(const GroupsSelector& );

            /**
            ApiRoute('alpha/groups/list')


            Lists groups on a team. Permission : Team Information

            */
        std::unique_ptr<GroupsListResult> alphaGroupsList(const GroupsListArg& );

            /**
            ApiRoute('alpha/groups/list/continue')


            Once a cursor has been retrieved from :meth:`alpha_groups_list`, use
            this to paginate through all groups. Permission : Team information

            on error:GroupsListContinueError throws exception GroupsListContinueErrorException
            */
        std::unique_ptr<GroupsListResult> alphaGroupsListContinue(const GroupsListContinueArg& );

            /**
            ApiRoute('alpha/groups/update')


            Updates a group's name, external ID or management type. Permission :
            Team member management

            on error:GroupUpdateError throws exception GroupUpdateErrorException
            */
        std::unique_ptr<GroupFullInfo> alphaGroupsUpdate(const GroupUpdateArgs& );

            /**
            ApiRoute('devices/list_member_devices')


            List all device sessions of a team's member.

            on error:ListMemberDevicesError throws exception ListMemberDevicesErrorException
            */
        std::unique_ptr<ListMemberDevicesResult> devicesListMemberDevices(const ListMemberDevicesArg& );

            /**
            ApiRoute('devices/list_members_devices')


            List all device sessions of a team.

            on error:ListMembersDevicesError throws exception ListMembersDevicesErrorException
            */
        std::unique_ptr<ListMembersDevicesResult> devicesListMembersDevices(const ListMembersDevicesArg& );

            /**
            ApiRoute('devices/list_team_devices')


            List all device sessions of a team.

            on error:ListTeamDevicesError throws exception ListTeamDevicesErrorException
            */
        std::unique_ptr<ListTeamDevicesResult> devicesListTeamDevices(const ListTeamDevicesArg& );

            /**
            ApiRoute('devices/revoke_device_session')


            Revoke a device session of a team's member

            on error:RevokeDeviceSessionError throws exception RevokeDeviceSessionErrorException
            */
        void devicesRevokeDeviceSession(const RevokeDeviceSessionArg& );

            /**
            ApiRoute('devices/revoke_device_session_batch')


            Revoke a list of device sessions of team members

            on error:RevokeDeviceSessionBatchError throws exception RevokeDeviceSessionBatchErrorException
            */
        std::unique_ptr<RevokeDeviceSessionBatchResult> devicesRevokeDeviceSessionBatch(const RevokeDeviceSessionBatchArg& );

            /**
            ApiRoute('get_info')


            Retrieves information about a team.

            */
        std::unique_ptr<TeamGetInfoResult> getInfo(void);

            /**
            ApiRoute('groups/create')


            Creates a new, empty group, with a requested name. Permission : Team
            member management

            on error:GroupCreateError throws exception GroupCreateErrorException
            */
        std::unique_ptr<GroupFullInfo> groupsCreate(const GroupCreateArg& );

            /**
            ApiRoute('groups/delete')


            Deletes a group. The group is deleted immediately. However the
            revoking of group-owned resources may take additional time. Use the
            :meth:`groups_job_status_get` to determine whether this process has
            completed. Permission : Team member management

            on error:GroupDeleteError throws exception GroupDeleteErrorException
            */
        std::unique_ptr<async::LaunchEmptyResult> groupsDelete(const GroupSelector& );

            /**
            ApiRoute('groups/get_info')


            Retrieves information about one or more groups. Permission : Team
            Information

            on error:GroupsGetInfoError throws exception GroupsGetInfoErrorException
            */
        std::list <GroupsGetInfoItem> groupsGetInfo(const GroupsSelector& );

            /**
            ApiRoute('groups/job_status/get')


            Once an async_job_id is returned from :meth:`groups_delete`,
            :meth:`groups_members_add` , or :meth:`groups_members_remove` use
            this method to poll the status of granting/revoking group members'
            access to group-owned resources. Permission : Team member management

            on error:GroupsPollError throws exception GroupsPollErrorException
            */
        std::unique_ptr<async::PollEmptyResult> groupsJobStatusGet(const async::PollArg& );

            /**
            ApiRoute('groups/list')


            Lists groups on a team. Permission : Team Information

            */
        std::unique_ptr<GroupsListResult> groupsList(const GroupsListArg& );

            /**
            ApiRoute('groups/list/continue')


            Once a cursor has been retrieved from :meth:`groups_list`, use this
            to paginate through all groups. Permission : Team information

            on error:GroupsListContinueError throws exception GroupsListContinueErrorException
            */
        std::unique_ptr<GroupsListResult> groupsListContinue(const GroupsListContinueArg& );

            /**
            ApiRoute('groups/members/add')


            Adds members to a group. The members are added immediately. However
            the granting of group-owned resources may take additional time. Use
            the :meth:`groups_job_status_get` to determine whether this process
            has completed. Permission : Team member management

            on error:GroupMembersAddError throws exception GroupMembersAddErrorException
            */
        std::unique_ptr<GroupMembersChangeResult> groupsMembersAdd(const GroupMembersAddArg& );

            /**
            ApiRoute('groups/members/list')


            Lists members of a group. Permission : Team Information

            on error:GroupSelectorError throws exception GroupSelectorErrorException
            */
        std::unique_ptr<GroupsMembersListResult> groupsMembersList(const GroupsMembersListArg& );

            /**
            ApiRoute('groups/members/list/continue')


            Once a cursor has been retrieved from :meth:`groups_members_list`,
            use this to paginate through all members of the group. Permission :
            Team information

            on error:GroupsMembersListContinueError throws exception GroupsMembersListContinueErrorException
            */
        std::unique_ptr<GroupsMembersListResult> groupsMembersListContinue(const GroupsMembersListContinueArg& );

            /**
            ApiRoute('groups/members/remove')


            Removes members from a group. The members are removed immediately.
            However the revoking of group-owned resources may take additional
            time. Use the :meth:`groups_job_status_get` to determine whether
            this process has completed. This method permits removing the only
            owner of a group, even in cases where this is not possible via the
            web client. Permission : Team member management

            on error:GroupMembersRemoveError throws exception GroupMembersRemoveErrorException
            */
        std::unique_ptr<GroupMembersChangeResult> groupsMembersRemove(const GroupMembersRemoveArg& );

            /**
            ApiRoute('groups/members/set_access_type')


            Sets a member's access type in a group. Permission : Team member
            management

            on error:GroupMemberSetAccessTypeError throws exception GroupMemberSetAccessTypeErrorException
            */
        std::list <GroupsGetInfoItem> groupsMembersSetAccessType(const GroupMembersSetAccessTypeArg& );

            /**
            ApiRoute('groups/update')


            Updates a group's name and/or external ID. Permission : Team member
            management

            on error:GroupUpdateError throws exception GroupUpdateErrorException
            */
        std::unique_ptr<GroupFullInfo> groupsUpdate(const GroupUpdateArgs& );

            /**
            ApiRoute('linked_apps/list_member_linked_apps')


            List all linked applications of the team member. Note, this endpoint
            does not list any team-linked applications.

            on error:ListMemberAppsError throws exception ListMemberAppsErrorException
            */
        std::unique_ptr<ListMemberAppsResult> linkedAppsListMemberLinkedApps(const ListMemberAppsArg& );

            /**
            ApiRoute('linked_apps/list_members_linked_apps')


            List all applications linked to the team members' accounts. Note,
            this endpoint does not list any team-linked applications.

            on error:ListMembersAppsError throws exception ListMembersAppsErrorException
            */
        std::unique_ptr<ListMembersAppsResult> linkedAppsListMembersLinkedApps(const ListMembersAppsArg& );

            /**
            ApiRoute('linked_apps/list_team_linked_apps')


            List all applications linked to the team members' accounts. Note,
            this endpoint doesn't list any team-linked applications.

            on error:ListTeamAppsError throws exception ListTeamAppsErrorException
            */
        std::unique_ptr<ListTeamAppsResult> linkedAppsListTeamLinkedApps(const ListTeamAppsArg& );

            /**
            ApiRoute('linked_apps/revoke_linked_app')


            Revoke a linked application of the team member

            on error:RevokeLinkedAppError throws exception RevokeLinkedAppErrorException
            */
        void linkedAppsRevokeLinkedApp(const RevokeLinkedApiAppArg& );

            /**
            ApiRoute('linked_apps/revoke_linked_app_batch')


            Revoke a list of linked applications of the team members

            on error:RevokeLinkedAppBatchError throws exception RevokeLinkedAppBatchErrorException
            */
        std::unique_ptr<RevokeLinkedAppBatchResult> linkedAppsRevokeLinkedAppBatch(const RevokeLinkedApiAppBatchArg& );

            /**
            ApiRoute('members/add')


            Adds members to a team. Permission : Team member management A
            maximum of 20 members can be specified in a single call. If no
            Dropbox account exists with the email address specified, a new
            Dropbox account will be created with the given email address, and
            that account will be invited to the team. If a personal Dropbox
            account exists with the email address specified in the call, this
            call will create a placeholder Dropbox account for the user on the
            team and send an email inviting the user to migrate their existing
            personal account onto the team. Team member management apps are
            required to set an initial given_name and surname for a user to use
            in the team invitation and for 'Perform as team member' actions
            taken on the user before they become 'active'.

            */
        std::unique_ptr<MembersAddLaunch> membersAdd(const MembersAddArg& );

            /**
            ApiRoute('members/add/job_status/get')


            Once an async_job_id is returned from :meth:`members_add` , use this
            to poll the status of the asynchronous request. Permission : Team
            member management

            on error:PollError throws exception PollErrorException
            */
        std::unique_ptr<MembersAddJobStatus> membersAddJobStatusGet(const async::PollArg& );

            /**
            ApiRoute('members/get_info')


            Returns information about multiple team members. Permission : Team
            information This endpoint will return
            ``MembersGetInfoItem.id_not_found``, for IDs (or emails) that cannot
            be matched to a valid team member.

            on error:MembersGetInfoError throws exception MembersGetInfoErrorException
            */
        std::list <MembersGetInfoItem> membersGetInfo(const MembersGetInfoArgs& );

            /**
            ApiRoute('members/list')


            Lists members of a team. Permission : Team information

            on error:MembersListError throws exception MembersListErrorException
            */
        std::unique_ptr<MembersListResult> membersList(const MembersListArg& );

            /**
            ApiRoute('members/list/continue')


            Once a cursor has been retrieved from :meth:`members_list`, use this
            to paginate through all team members. Permission : Team information

            on error:MembersListContinueError throws exception MembersListContinueErrorException
            */
        std::unique_ptr<MembersListResult> membersListContinue(const MembersListContinueArg& );

            /**
            ApiRoute('members/recover')


            Recover a deleted member. Permission : Team member management
            Exactly one of team_member_id, email, or external_id must be
            provided to identify the user account.

            on error:MembersRecoverError throws exception MembersRecoverErrorException
            */
        void membersRecover(const MembersRecoverArg& );

            /**
            ApiRoute('members/remove')


            Removes a member from a team. Permission : Team member management
            Exactly one of team_member_id, email, or external_id must be
            provided to identify the user account. This is not a deactivation
            where the account can be re-activated again. Calling
            :meth:`members_add` with the removed user's email address will
            create a new account with a new team_member_id that will not have
            access to any content that was shared with the initial account. This
            endpoint may initiate an asynchronous job. To obtain the final
            result of the job, the client should periodically poll
            :meth:`members_remove_job_status_get`.

            on error:MembersRemoveError throws exception MembersRemoveErrorException
            */
        std::unique_ptr<async::LaunchEmptyResult> membersRemove(const MembersRemoveArg& );

            /**
            ApiRoute('members/remove/job_status/get')


            Once an async_job_id is returned from :meth:`members_remove` , use
            this to poll the status of the asynchronous request. Permission :
            Team member management

            on error:PollError throws exception PollErrorException
            */
        std::unique_ptr<async::PollEmptyResult> membersRemoveJobStatusGet(const async::PollArg& );

            /**
            ApiRoute('members/send_welcome_email')


            Sends welcome email to pending team member. Permission : Team member
            management Exactly one of team_member_id, email, or external_id must
            be provided to identify the user account. No-op if team member is
            not pending.

            on error:MembersSendWelcomeError throws exception MembersSendWelcomeErrorException
            */
        void membersSendWelcomeEmail(const UserSelectorArg& );

            /**
            ApiRoute('members/set_admin_permissions')


            Updates a team member's permissions. Permission : Team member
            management

            on error:MembersSetPermissionsError throws exception MembersSetPermissionsErrorException
            */
        std::unique_ptr<MembersSetPermissionsResult> membersSetAdminPermissions(const MembersSetPermissionsArg& );

            /**
            ApiRoute('members/set_profile')


            Updates a team member's profile. Permission : Team member management

            on error:MembersSetProfileError throws exception MembersSetProfileErrorException
            */
        std::unique_ptr<TeamMemberInfo> membersSetProfile(const MembersSetProfileArg& );

            /**
            ApiRoute('members/suspend')


            Suspend a member from a team. Permission : Team member management
            Exactly one of team_member_id, email, or external_id must be
            provided to identify the user account.

            on error:MembersSuspendError throws exception MembersSuspendErrorException
            */
        void membersSuspend(const MembersDeactivateArg& );

            /**
            ApiRoute('members/unsuspend')


            Unsuspend a member from a team. Permission : Team member management
            Exactly one of team_member_id, email, or external_id must be
            provided to identify the user account.

            on error:MembersUnsuspendError throws exception MembersUnsuspendErrorException
            */
        void membersUnsuspend(const MembersUnsuspendArg& );

            /**
            ApiRoute('properties/template/add')


            Add a property template. See route files/properties/add to add
            properties to a file.

            on error:ModifyPropertyTemplateError throws exception ModifyPropertyTemplateErrorException
            */
        std::unique_ptr<AddPropertyTemplateResult> propertiesTemplateAdd(const AddPropertyTemplateArg& );

            /**
            ApiRoute('properties/template/get')


            Get the schema for a specified template.

            on error:PropertyTemplateError throws exception PropertyTemplateErrorException
            */
        std::unique_ptr<properties::GetPropertyTemplateResult> propertiesTemplateGet(const properties::GetPropertyTemplateArg& );

            /**
            ApiRoute('properties/template/list')


            Get the property template identifiers for a team. To get the schema
            of each template use :meth:`properties_template_get`.

            on error:PropertyTemplateError throws exception PropertyTemplateErrorException
            */
        std::unique_ptr<properties::ListPropertyTemplateIds> propertiesTemplateList(void);

            /**
            ApiRoute('properties/template/update')


            Update a property template. This route can update the template name,
            the template description and add optional properties to templates.

            on error:ModifyPropertyTemplateError throws exception ModifyPropertyTemplateErrorException
            */
        std::unique_ptr<UpdatePropertyTemplateResult> propertiesTemplateUpdate(const UpdatePropertyTemplateArg& );

            /**
            ApiRoute('reports/get_activity')


            Retrieves reporting data about a team's user activity.

            on error:DateRangeError throws exception DateRangeErrorException
            */
        std::unique_ptr<GetActivityReport> reportsGetActivity(const DateRange& );

            /**
            ApiRoute('reports/get_devices')


            Retrieves reporting data about a team's linked devices.

            on error:DateRangeError throws exception DateRangeErrorException
            */
        std::unique_ptr<GetDevicesReport> reportsGetDevices(const DateRange& );

            /**
            ApiRoute('reports/get_membership')


            Retrieves reporting data about a team's membership.

            on error:DateRangeError throws exception DateRangeErrorException
            */
        std::unique_ptr<GetMembershipReport> reportsGetMembership(const DateRange& );

            /**
            ApiRoute('reports/get_storage')


            Retrieves reporting data about a team's storage usage.

            on error:DateRangeError throws exception DateRangeErrorException
            */
        std::unique_ptr<GetStorageReport> reportsGetStorage(const DateRange& );

    protected:
        Endpoint* m_end_point;
    };//TeamRoutes

    ///exception GroupCreateError for alpha/groups/create
    DECLARE_API_ERR_EXCEPTION(GroupCreateErrorException, team::GroupCreateError);

    ///exception GroupsGetInfoError for alpha/groups/get_info
    DECLARE_API_ERR_EXCEPTION(GroupsGetInfoErrorException, team::GroupsGetInfoError);

    ///exception GroupsListContinueError for alpha/groups/list/continue
    DECLARE_API_ERR_EXCEPTION(GroupsListContinueErrorException, team::GroupsListContinueError);

    ///exception GroupUpdateError for alpha/groups/update
    DECLARE_API_ERR_EXCEPTION(GroupUpdateErrorException, team::GroupUpdateError);

    ///exception ListMemberDevicesError for devices/list_member_devices
    DECLARE_API_ERR_EXCEPTION(ListMemberDevicesErrorException, team::ListMemberDevicesError);

    ///exception ListMembersDevicesError for devices/list_members_devices
    DECLARE_API_ERR_EXCEPTION(ListMembersDevicesErrorException, team::ListMembersDevicesError);

    ///exception ListTeamDevicesError for devices/list_team_devices
    DECLARE_API_ERR_EXCEPTION(ListTeamDevicesErrorException, team::ListTeamDevicesError);

    ///exception RevokeDeviceSessionError for devices/revoke_device_session
    DECLARE_API_ERR_EXCEPTION(RevokeDeviceSessionErrorException, team::RevokeDeviceSessionError);

    ///exception RevokeDeviceSessionBatchError for devices/revoke_device_session_batch
    DECLARE_API_ERR_EXCEPTION(RevokeDeviceSessionBatchErrorException, team::RevokeDeviceSessionBatchError);

    ///exception GroupDeleteError for groups/delete
    DECLARE_API_ERR_EXCEPTION(GroupDeleteErrorException, team::GroupDeleteError);

    ///exception GroupsPollError for groups/job_status/get
    DECLARE_API_ERR_EXCEPTION(GroupsPollErrorException, team::GroupsPollError);

    ///exception GroupMembersAddError for groups/members/add
    DECLARE_API_ERR_EXCEPTION(GroupMembersAddErrorException, team::GroupMembersAddError);

    ///exception GroupSelectorError for groups/members/list
    DECLARE_API_ERR_EXCEPTION(GroupSelectorErrorException, team::GroupSelectorError);

    ///exception GroupsMembersListContinueError for groups/members/list/continue
    DECLARE_API_ERR_EXCEPTION(GroupsMembersListContinueErrorException, team::GroupsMembersListContinueError);

    ///exception GroupMembersRemoveError for groups/members/remove
    DECLARE_API_ERR_EXCEPTION(GroupMembersRemoveErrorException, team::GroupMembersRemoveError);

    ///exception GroupMemberSetAccessTypeError for groups/members/set_access_type
    DECLARE_API_ERR_EXCEPTION(GroupMemberSetAccessTypeErrorException, team::GroupMemberSetAccessTypeError);

    ///exception ListMemberAppsError for linked_apps/list_member_linked_apps
    DECLARE_API_ERR_EXCEPTION(ListMemberAppsErrorException, team::ListMemberAppsError);

    ///exception ListMembersAppsError for linked_apps/list_members_linked_apps
    DECLARE_API_ERR_EXCEPTION(ListMembersAppsErrorException, team::ListMembersAppsError);

    ///exception ListTeamAppsError for linked_apps/list_team_linked_apps
    DECLARE_API_ERR_EXCEPTION(ListTeamAppsErrorException, team::ListTeamAppsError);

    ///exception RevokeLinkedAppError for linked_apps/revoke_linked_app
    DECLARE_API_ERR_EXCEPTION(RevokeLinkedAppErrorException, team::RevokeLinkedAppError);

    ///exception RevokeLinkedAppBatchError for linked_apps/revoke_linked_app_batch
    DECLARE_API_ERR_EXCEPTION(RevokeLinkedAppBatchErrorException, team::RevokeLinkedAppBatchError);

    ///exception PollError for members/add/job_status/get
    DECLARE_API_ERR_EXCEPTION(PollErrorException, async::PollError);

    ///exception MembersGetInfoError for members/get_info
    DECLARE_API_ERR_EXCEPTION(MembersGetInfoErrorException, team::MembersGetInfoError);

    ///exception MembersListError for members/list
    DECLARE_API_ERR_EXCEPTION(MembersListErrorException, team::MembersListError);

    ///exception MembersListContinueError for members/list/continue
    DECLARE_API_ERR_EXCEPTION(MembersListContinueErrorException, team::MembersListContinueError);

    ///exception MembersRecoverError for members/recover
    DECLARE_API_ERR_EXCEPTION(MembersRecoverErrorException, team::MembersRecoverError);

    ///exception MembersRemoveError for members/remove
    DECLARE_API_ERR_EXCEPTION(MembersRemoveErrorException, team::MembersRemoveError);

    ///exception MembersSendWelcomeError for members/send_welcome_email
    DECLARE_API_ERR_EXCEPTION(MembersSendWelcomeErrorException, team::MembersSendWelcomeError);

    ///exception MembersSetPermissionsError for members/set_admin_permissions
    DECLARE_API_ERR_EXCEPTION(MembersSetPermissionsErrorException, team::MembersSetPermissionsError);

    ///exception MembersSetProfileError for members/set_profile
    DECLARE_API_ERR_EXCEPTION(MembersSetProfileErrorException, team::MembersSetProfileError);

    ///exception MembersSuspendError for members/suspend
    DECLARE_API_ERR_EXCEPTION(MembersSuspendErrorException, team::MembersSuspendError);

    ///exception MembersUnsuspendError for members/unsuspend
    DECLARE_API_ERR_EXCEPTION(MembersUnsuspendErrorException, team::MembersUnsuspendError);

    ///exception ModifyPropertyTemplateError for properties/template/add
    DECLARE_API_ERR_EXCEPTION(ModifyPropertyTemplateErrorException, properties::ModifyPropertyTemplateError);

    ///exception PropertyTemplateError for properties/template/get
    DECLARE_API_ERR_EXCEPTION(PropertyTemplateErrorException, properties::PropertyTemplateError);

    ///exception DateRangeError for reports/get_activity
    DECLARE_API_ERR_EXCEPTION(DateRangeErrorException, team::DateRangeError);


}//team
}//dropboxQt
