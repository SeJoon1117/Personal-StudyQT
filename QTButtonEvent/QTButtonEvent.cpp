#include "QTButtonEvent.h"

QTButtonEvent::QTButtonEvent(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    connect(ui.pushButtonMyName, SIGNAL(clicked()), this, SLOT(ButtonMyName()));
    connect(ui.pushButtonMyAge, SIGNAL(clicked()), this, SLOT(ButtonMyAge()));
    connect(ui.pushButtonQuit, SIGNAL(clicked()), this, SLOT(ButtonQuit()));
}

QTButtonEvent::~QTButtonEvent()
{}

void QTButtonEvent::ButtonMyName() {
    QMessageBox::information(this, "My Name", "Ahn sejoon");
}

void QTButtonEvent::ButtonMyAge() {
    QMessageBox::information(this, "My Age", "24");
}

void QTButtonEvent::ButtonQuit() {
    QApplication::quit();
}