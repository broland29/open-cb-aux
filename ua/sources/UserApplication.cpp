#include "../headers/UserApplication.h"

int UserApplication::run(int argc, char *argv[])
{
	QApplication app(argc, argv);

	MainWindow* window = new MainWindow();
	window->show();

	return app.exec();
}