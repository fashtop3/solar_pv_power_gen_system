#-------------------------------------------------
#
# Project created by QtCreator 2016-09-22T11:54:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pv_power_gen_system
TEMPLATE = app


SOURCES += \
    formchargecontrollersizing.cpp \
    forminvertersizing.cpp \
    formloadanalysis.cpp \
    formpvarraysizing.cpp \
    formrecomendedpvsystem.cpp \
    formresourseestimation.cpp \
    formsolarstoragesizing.cpp \
    loadanalysisdelegate.cpp \
    main.cpp \
    mainwindow.cpp \
    preferencedialog.cpp \
    pvsystem.cpp

HEADERS  += \
    formchargecontrollersizing.h \
    forminvertersizing.h \
    formloadanalysis.h \
    formpvarraysizing.h \
    formrecomendedpvsystem.h \
    formresourseestimation.h \
    formsolarstoragesizing.h \
    loadanalysisdelegate.h \
    mainwindow.h \
    preferencedialog.h \
    pvsystem.h

FORMS    += \
    formchargecontrollersizing.ui \
    forminvertersizing.ui \
    formloadanalysis.ui \
    formpvarraysizing.ui \
    formrecomendedpvsystem.ui \
    formresourseestimation.ui \
    formsolarstoragesizing.ui \
    mainwindow.ui \
    preferencedialog.ui

RESOURCES += \
    resource.qrc
