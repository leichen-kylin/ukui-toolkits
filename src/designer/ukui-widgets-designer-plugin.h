#ifndef UKUIWIDGETSDESIGNERPLUGIN_H
#define UKUIWIDGETSDESIGNERPLUGIN_H

#include <QObject>
#include <QDesignerCustomWidgetInterface>

class UKUIWidgetsDesignerPlugin : public QObject, public QDesignerCustomWidgetInterface
{
//    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QDesignerCustomWidgetInterface")
    Q_INTERFACES(QDesignerCustomWidgetInterface)
public:
    explicit UKUIWidgetsDesignerPlugin(QObject *parent = nullptr);

    virtual bool isContainer() const override;
    virtual bool isInitialized() const override;
    virtual QIcon icon() const override;
    virtual QString domXml() const override;
    virtual QString group() const override;
    virtual QString includeFile() const override;
    virtual QString name() const override;
    virtual QString toolTip() const override;
    virtual QString whatsThis() const override;
    virtual void initialize(QDesignerFormEditorInterface *core) override;

protected:
    bool m_isContainer;
    QString m_name;
    QString m_include;
    QString m_toolTip;
    QString m_whatsThis;
    QString m_domXml;
    QString m_group;
    QString m_codeTemplate;
    QIcon m_icon;

private:
    bool m_initialized;
};

#endif // UKUIWIDGETSDESIGNERPLUGIN_H
