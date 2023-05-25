#include "PrintBtn.h"
#include <QApplication>
#include <QFontdialog.h>

int main(int argc, char* argv[]) {
	QApplication btn(argc, argv);
	PrintBtn PrintBtn;
	PrintBtn.showMaximized();
	return btn.exec();
}