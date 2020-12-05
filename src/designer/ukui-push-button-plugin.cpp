#include "ukui-push-button-plugin.h"
#include <QPushButton>
#include <QtUKUIWidgets/ukuipushbutton.h>

UKUIPushButtonPlugin::UKUIPushButtonPlugin(QObject *parent)
    : QObject(parent)
{
}

QString UKUIPushButtonPlugin::name() const
{
    return QStringLiteral("UKUIPushButton");
}

QString UKUIPushButtonPlugin::group() const
{
    return QStringLiteral("UKUI Button");
}

QString UKUIPushButtonPlugin::toolTip() const
{
    return QStringLiteral("A UKUI Push Button");
}

QString UKUIPushButtonPlugin::whatsThis() const
{
    return QStringLiteral("A UKUI Push Button");
}

QString UKUIPushButtonPlugin::includeFile() const
{
    return QStringLiteral("<QtUKUIWidgets/ukuipushbutton.h>");
}

QIcon UKUIPushButtonPlugin::icon() const
{
//    QIcon icon(QStringLiteral(":/qt-project.org/designer/images/qquickwidget.png"));
//    if (icon.isNull())
        return QIcon(QIcon::fromTheme("window-close-symbolic"));
//    return icon;
}

bool UKUIPushButtonPlugin::isContainer() const
{
    return false;
}

QWidget *UKUIPushButtonPlugin::createWidget(QWidget *parent)
{
    return new QToolButton(parent);
}

bool UKUIPushButtonPlugin::isInitialized() const
{
    return initialized;
}

void UKUIPushButtonPlugin::initialize(QDesignerFormEditorInterface *formEditor)
{
    if (initialized)
        return;
    initialized = true;
}

QString UKUIPushButtonPlugin::domXml() const
{
    return "<widget class=\"UKUIPushButton\" name=\"UKUIPushButton\">\n"
           " <property name=\"geometry\">\n"
           "  <rect>\n"
           "   <x>0</x>\n"
           "   <y>0</y>\n"
           "   <width>36</width>\n"
           "   <height>36</height>\n"
           "  </rect>\n"
           " </property>\n"
           "</widget>\n";
    return QLatin1String();
}
