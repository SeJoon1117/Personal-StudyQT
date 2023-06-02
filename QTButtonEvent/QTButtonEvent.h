#ifndef QTBUTTONEVENT_H
#define QTBUTTONEVENT_H

#include <QtWidgets/QMainWindow>
#include <QPushButton>
#include <QMessagebox>
#include "ui_QTButtonEvent.h"

namespace Ui {
    class QTButtonEvent;
}

class QTButtonEvent : public QMainWindow {
    Q_OBJECT

public:
    explicit QTButtonEvent(QWidget* parent = 0);
    ~QTButtonEvent();

private:
    Ui::QTButtonEventClass ui;

private slots:
    void ButtonMyName();
    void ButtonMyAge();
    void ButtonQuit();
};

#endif