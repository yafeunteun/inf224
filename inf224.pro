TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++0x


SOURCES += main.cpp \
    multimedia.cpp \
    video.cpp \
    photo.cpp \
    film.cpp

HEADERS += \
    multimedia.h \
    video.h \
    photo.h \
    film.h
