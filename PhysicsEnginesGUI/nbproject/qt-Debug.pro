# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/MinGW_Qt-Windows
TARGET = PhysicsEnginesGUI
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui
SOURCES += MassPointGUI.cpp PhisicsCanvas.cpp main.cpp
HEADERS += MassPointGUI.h PhisicsCanvas.h
FORMS +=
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/MinGW_Qt-Windows
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += .. ../PhysicsEngines ../boost 
LIBS += ../PhysicsEngines/dist/Debug/MinGW_Qt-Windows/libphysicsengines.a  
