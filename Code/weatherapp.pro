QT       += core gui
QT += widgets
QT += network
QT += multimedia multimediawidgets
greaterThan(QT_MAJOR_VERSION, 5)

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    buttonhoverwatcher.cpp \
    currentconditions.cpp \
    jsonobject.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    buttonhoverwatcher.h \
    currentconditions.h \
    jsonobject.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    weather-animations/clear.gif
