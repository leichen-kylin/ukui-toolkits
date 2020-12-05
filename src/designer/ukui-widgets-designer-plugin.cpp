#include "ukui-widgets-designer-plugin.h"

UKUIWidgetsDesignerPlugin::UKUIWidgetsDesignerPlugin(QObject *parent)
    : QObject(parent), m_initialized(false)
{

}



bool UKUIWidgetsDesignerPlugin::isContainer() const
{
    return m_isContainer;
}

bool UKUIWidgetsDesignerPlugin::isInitialized() const
{
    return m_initialized;
}

QIcon UKUIWidgetsDesignerPlugin::icon() const
{
    return m_icon;
}

QString UKUIWidgetsDesignerPlugin::domXml() const
{
    return m_domXml;
}

QString UKUIWidgetsDesignerPlugin::group() const
{
    return m_group;
}

QString UKUIWidgetsDesignerPlugin::includeFile() const
{
    return m_include;
}

QString UKUIWidgetsDesignerPlugin::name() const
{
    return m_name;
}

QString UKUIWidgetsDesignerPlugin::toolTip() const
{
    return m_toolTip;
}

QString UKUIWidgetsDesignerPlugin::whatsThis() const
{
    return m_whatsThis;
}

void UKUIWidgetsDesignerPlugin::initialize(QDesignerFormEditorInterface *core)
{
    if (m_initialized)
        return;
    m_initialized = true;
}
