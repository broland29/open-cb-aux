#include "../headers/MainWindow.h"

MainWindow::MainWindow(QWidget* parent) :
    QMainWindow(parent)
{
    setWindowTitle("Test");
    setFixedSize(500, 500);
}

MainWindow::~MainWindow()
{
}