QT       += network xml
QT       -= gui
CONFIG += staticlib
CONFIG -= flat
TEMPLATE = lib

# API_MODULES = async auth files properties sharing team team_common team_policies users endpoint


SRC_DIR = ../src
API_DIR = $${SRC_DIR}/dropbox

include ( $$PWD/../src/dropbox/async/async.pri )
include ( $$PWD/../src/dropbox/auth/auth.pri )
include ( $$PWD/../src/dropbox/files/files.pri )
include ( $$PWD/../src/dropbox/properties/properties.pri )
include ( $$PWD/../src/dropbox/sharing/sharing.pri )
include ( $$PWD/../src/dropbox/team/team.pri )
include ( $$PWD/../src/dropbox/team_common/team_common.pri )
include ( $$PWD/../src/dropbox/team_policies/team_policies.pri )
include ( $$PWD/../src/dropbox/users/users.pri )
include ( $$PWD/../src/dropbox/endpoint/endpoint.pri )


      

# for(m, API_MODULES){
#       d = $${API_DIR}/$${m}
#       exists($${d}){
#	   HEADERS += $${d}/*.h	
#	   SOURCES += $${d}/*.cpp
#       }
# }

# HEADERS += $${API_DIR}/*.h
# SOURCES += $${API_DIR}/*.cpp

HEADERS += $${API_DIR}/DropboxClient.h
HEADERS += $${API_DIR}/DropboxRouteBase.h
SOURCES += $${API_DIR}/DropboxClient.cpp


################################################################
# autotest generation (internal profiling usage)               #
#                                                              #
# HEADERS += $${API_DIR}/AUTOTEST/*.h                          #
# SOURCES += $${API_DIR}/AUTOTEST/*.cpp                        #
# DEFINES += API_QT_AUTOTEST                                   #
################################################################


INCLUDEPATH += $${SRC_DIR}

