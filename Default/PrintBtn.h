#ifndef PRINTBTN_H
#define PRINTBTN_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
	class PrintBtn;
}

class PrintBtn : public QMainWindow {
	Q_OBJECT
public:
	explicit PrintBtn(QWidget* parent = nullptr);
private slots:
	void myName();
	void myAge();
private:
	QPushButton* m_button;
};
#endif