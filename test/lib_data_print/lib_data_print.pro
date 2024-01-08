QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  \
    main.cpp \
    tst_lib_data.cpp



win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../../lib/data_print/release/ -ldata_print
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../../lib/data_print/debug/ -ldata_print
else:unix: LIBS += -L$$OUT_PWD/../../lib/data_print/ -ldata_print

INCLUDEPATH += $$PWD/../../lib/data_print
DEPENDPATH += $$PWD/../../lib/data_print

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../../lib/data_cal/release/ -ldata_cal
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../../lib/data_cal/debug/ -ldata_cal
else:unix: LIBS += -L$$OUT_PWD/../../lib/data_cal/ -ldata_cal

INCLUDEPATH += $$PWD/../../lib/data_cal
DEPENDPATH += $$PWD/../../lib/data_cal
