#include "PrintBtn.h"

PrintBtn::PrintBtn(QWidget* parent) :QMainWindow(parent) {
	m_button = new QPushButton("About Me ", this);
	m_button->setGeometry(QRect(QPoint(500, 300), QSize(200, 100)));

	connect(m_button, &QPushButton::released, this, &PrintBtn::myName);
}

void PrintBtn::myName() {
	m_button->setText("Ahn Se Joon");
	m_button->resize(150, 100);
	connect(m_button, &QPushButton::released, this, &PrintBtn::myAge);
}

void PrintBtn::myAge() {
	m_button->setText("24");
	m_button->resize(100, 50);
}