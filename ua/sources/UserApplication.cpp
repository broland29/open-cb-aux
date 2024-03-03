#include "../headers/UserApplication.h"

int UserApplication::run(int argc, char *argv[])
{
	std::cout << "Hello from UserApplication!" << std::endl;

	QApplication app(argc, argv);

	MainWindow* window = new MainWindow();
	window->show();

	return app.exec();
}