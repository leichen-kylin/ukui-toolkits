TARGET = QtUKUIWidgets
QT = widgets gui core

#TEMPLATE = lib
DEFINES += UKUIWIDGETS_LIBRARY

INCLUDEPATH += $$PWD
#CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
#DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

MODULE_CONFIG = uic
CONFIG += $$MODULE_CONFIG

QMAKE_LIBS += $$QMAKE_LIBS_GUI

#QMAKE_DOCS = $$PWD/doc/qtwidgets.qdocconf

SOURCES += \
    ukui-widgets.cpp \
    ukuipushbutton.cpp

HEADERS += \
    ukui-widgets.h \
    ukuipushbutton.h \
    ukuiwidgets_global.h

unix {
    header.path = $$[QT_INSTALL_HEADERS]/QtUKUIWidgets
    header.files = $${HEADERS}
    INSTALLS += header
}

testcocoon {
    load(testcocoon)
}
MODULE_PLUGIN_TYPES += \
    styles

load(qt_module)
