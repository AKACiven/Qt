#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 主界面
    this->setWindowTitle("主界面");
    this->setFixedSize(320,320);

    // 开始
    QPushButton * startBtn = new QPushButton("开始",this);
    startBtn->setFixedSize(50,30);
    startBtn->move(130,50);

    // 创建第二个窗口
    second = new SecondWindow;

    // 监听第二个窗口的返回信号
    connect(second,&SecondWindow::back,[=](){
        second->hide();     // 第二个窗口隐藏
        this->show();       // 自身显示
    });

    connect(startBtn,&QPushButton::clicked,[=](){
        this->hide();       // 将自身隐藏
        second->show();     // 显示第二个窗口
    });

    // 退出
    QPushButton * exitBtn = new QPushButton("退出",this);
    exitBtn->setFixedSize(50,30);
    exitBtn->move(130,100);
    connect(exitBtn,&QPushButton::clicked,[=](){
        this->close();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
