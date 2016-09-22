#-------------------------------------------------
#
# Project created by QtCreator 2016-07-23T11:34:18
#
#-------------------------------------------------

CONFIG += c++11

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PV_POWER_GENERATOR_SYSTEM
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    formresourseestimation.cpp \
    formloadanalysis.cpp \
    formpvarraysizing.cpp \
    formchargecontrollersizing.cpp \
    forminvertersizing.cpp \
    formsolarstoragesizing.cpp \
    formrecomendedpvsystem.cpp \
    preferencedialog.cpp \
    pvsystem.cpp \
    loadanalysisdelegate.cpp

HEADERS  += mainwindow.h \
    formresourseestimation.h \
    formloadanalysis.h \
    formpvarraysizing.h \
    formchargecontrollersizing.h \
    forminvertersizing.h \
    formsolarstoragesizing.h \
    formrecomendedpvsystem.h \
    preferencedialog.h \
    pvsystem.h \
    loadanalysisdelegate.h

FORMS    += mainwindow.ui \
    formresourseestimation.ui \
    formloadanalysis.ui \
    formpvarraysizing.ui \
    formchargecontrollersizing.ui \
    forminvertersizing.ui \
    formsolarstoragesizing.ui \
    formrecomendedpvsystem.ui \
    preferencedialog.ui

RESOURCES += \
    resource.qrc
