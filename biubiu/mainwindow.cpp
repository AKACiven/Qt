#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QToolBar>
#include <QToolButton>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());

    // 工具栏
    QToolBar * toolBar = new QToolBar;
    toolBar->setParent(this);
    toolBar->setGeometry(0,0,this->width(),40);

    // 开始按钮
    QToolButton * startBtn = new QToolButton(this);
    startBtn->setIcon(QIcon(":/res/startBtn.jpg")); // 设置图标
    startBtn->setFixedSize(30,30);                  // 设置固定大小
    startBtn->setParent(toolBar);
    startBtn->move(20,6);
    connect(startBtn,SIGNAL(clicked()),this,SLOT(start()));

    // 退出按钮
    QToolButton * exitBtn = new QToolButton (this);
    exitBtn->setIcon(QIcon(":/res/exitBtn.jpg"));
    exitBtn->setFixedSize(30,30);
    exitBtn->setParent(toolBar);
    exitBtn->move(60,6);
    connect(exitBtn,&QPushButton::clicked,[=](){
        this->close();  // 关闭窗口
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start(){
//    ui->textBrowser->clear();

    // 从输入区域获取内容
    QString content = ui->textEdit->toPlainText();
    char *content_char = content.toLatin1().data(); // 将QString转化为char字符数组

    // 输出
    QString result;
    for(int i = 0;'\0' != content_char[i];i++){
        result += content_char[i];
    }
    ui->textBrowser->append(result);    // 将结果输出到结果区域
}
