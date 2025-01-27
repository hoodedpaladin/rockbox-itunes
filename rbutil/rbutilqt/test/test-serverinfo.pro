#
#             __________               __   ___.
#   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
#   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
#   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
#   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
#                     \/            \/     \/    \/            \/
#
# All files in this archive are subject to the GNU General Public License.
# See the file COPYING in the source tree root for full license agreement.
#
# This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
# KIND, either express or implied.
#

#

QT += testlib

TEMPLATE = app
TARGET = test-serverinfo
INCLUDEPATH += . ../base stubs

# Input
SOURCES += \
    test-serverinfo.cpp \
    stubs/stubs-serverinfo.cpp \
    ../base/serverinfo.cpp

HEADERS += \
    ../base/rbsettings.h \
    ../base/rockboxinfo.h \
    ../base/systeminfo.h \
    ../base/serverinfo.h \

RESOURCES += ../rbutilqt.qrc
