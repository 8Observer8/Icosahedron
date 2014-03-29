#include <QApplication>
#include "scene3D.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv); // создаём приложение
    // инициализация оконной системы

    Scene3D scene1; // создаём виджет класса Scene3D
    scene1.setWindowTitle("lecture1"); // название окна
    scene1.resize(500, 500);  // размеры (nWidth, nHeight) окна
    scene1.show(); // изобразить виджет
    // scene1.showFullScreen();
    // scene1.showMaximized();

    return app.exec();
}
