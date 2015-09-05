#-------------------------------------------------
#
# Project created by QtCreator 2014-06-03T18:13:04
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Papagayo
TEMPLATE = app


SOURCES += src/main.cpp \
    src/mainwindow.cpp \
    src/lipsyncdoc.cpp \
    src/waveformview.cpp \
    src/mouthview.cpp \
    src/audioextractor.cpp \
    src/breakdowndialog.cpp

INCLUDEPATH += src

win32 {

INCLUDEPATH += libsndfile_1.0.25/Win32/include

LIBS += -LC:\Users\mclifton\Documents\QtDevelopment\Papagayo\libsndfile_1.0.25\Win32\lib -llibsndfile-1
LIBS += -LC:\Users\mclifton\Documents\QtDevelopment\Papagayo\libsndfile_1.0.25\Win32\lib -llibsndfile-1
#LIBS += -Llibsndfile_1.0.25\Win32\lib -llibsndfile-1

MY_DLL_FILES += LC:\Users\mclifton\Documents\QtDevelopment\Papagayo\libsndfile_1.0.25\Win32\bin\libsndfile-1.dll

} else {
LIBS += -lsndfile

}

HEADERS += src/mainwindow.h \
    src/lipsyncdoc.h \
    src/waveformview.h \
    src/audioextractor.h \
    src/mouthview.h \
    src/pg_config.h \
    src/breakdowndialog.h

FORMS += src/mainwindow.ui \
    src/breakdowndialog.ui

OTHER_FILES += \
    ToDo.txt

RESOURCES += \
    rsrc/papagayo.qrc

ICON = mac/papagayo.icns

QMAKE_INFO_PLIST = mac/Info.plist

RC_FILE = win/papagayo.rc

OBJECTIVE_SOURCES +=

extra_libs.files = MY_DLL_FILES
extra_libs.path = $$DESTDIR

INSTALLS += extra_libs
