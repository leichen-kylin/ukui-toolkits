#ifndef UKUIPUSHBUTTON_H
#define UKUIPUSHBUTTON_H

#include "ukuiwidgets_global.h"

#include <QPushButton>
#include <QToolButton>

class UKUIWIDGETS_EXPORT UKUIPushButton : public QWidget
{
public:
    explicit UKUIPushButton(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event);
};

#endif // UKUIPUSHBUTTON_H
