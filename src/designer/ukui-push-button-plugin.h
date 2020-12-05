#ifndef UKUIPUSHBUTTONPLUGIN_H
#define UKUIPUSHBUTTONPLUGIN_H

//#include "ukui-widgets-designer-plugin.h"
#include <QtUiPlugin/QDesignerCustomWidgetInterface>


class UKUIPushButtonPlugin : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QDesignerCustomWidgetInterface")
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit UKUIPushButtonPlugin(QObject *parent = nullptr);

    QString name() const override;
    QString group() const override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QString includeFile() const override;
    QIcon icon() const override;
    bool isContainer() const override;
    QWidget *createWidget(QWidget *parent) override;
    bool isInitialized() const override;
    void initialize(QDesignerFormEditorInterface *formEditor) override;
    QString domXml() const override;

private:
    bool initialized = false;
};

#endif // UKUIPUSHBUTTONPLUGIN_H
