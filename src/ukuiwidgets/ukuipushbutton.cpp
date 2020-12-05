#include "ukuipushbutton.h"
#include <QProxyStyle>
#include <QPainter>
#include <QStyleOption>

UKUIPushButton::UKUIPushButton(QWidget *parent)
    : QWidget(parent)
{
    this->setStyle(new QProxyStyle("oxygen"));
}

void UKUIPushButton::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.save();
    painter.setBrush(QColor(Qt::red));
    painter.drawRect(this->rect());
    painter.restore();
}
