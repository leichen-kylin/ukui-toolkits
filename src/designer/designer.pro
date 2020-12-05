QT += ukuiwidgets

QT += uiplugin


CONFIG      += plugin
TEMPLATE    = lib


#TARGET = $$qtLibraryTarget($$TARGET)
TARGET = ukuiwidgets_designer_plugin

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS += target

HEADERS += \
    ukui-push-button-plugin.h \
#    ukui-widgets-designer-plugin.h

SOURCES += \
    ukui-push-button-plugin.cpp \
#    ukui-widgets-designer-plugin.cpp

RESOURCES += \
    ukui-widgets-designer-plugin.qrc
