#include "secondwindow.h"
#include <QPushButton>

SecondWindow::SecondWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowTitle("第二个界面");
    this->setFixedSize(770,510);

    QPushButton * back = new QPushButton("返回",this);
    back->move(735,485);
    back->setFixedSize(30,20);

    connect(back,&QPushButton::clicked,[=](){
        emit this->back();
    });

}
