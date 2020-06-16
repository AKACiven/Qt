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
    this->setFixedSize(700,500);

    // 工具栏
    QToolBar * toolBar = new QToolBar;
    toolBar->setParent(this);
    toolBar->setGeometry(0,0,700,20);

    // 开始按钮
    QToolButton * startBtn = new QToolButton(this);
    startBtn->setIcon(QIcon(":/res/startBtn.jpg")); // 设置图标
    startBtn->setFixedSize(15,15);                  // 设置固定大小
    startBtn->setParent(toolBar);
    startBtn->move(10,3);
    connect(startBtn,SIGNAL(clicked()),this,SLOT(start()));

    // 退出按钮
    QToolButton * exitBtn = new QToolButton (this);
    exitBtn->setIcon(QIcon(":/res/exitBtn.jpg"));
    exitBtn->setFixedSize(15,15);
    exitBtn->setParent(toolBar);
    exitBtn->move(30,3);
    connect(exitBtn,&QPushButton::clicked,[=](){
        this->close();  // 关闭窗口
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start(){
    // 清除结果区域前面缓存的结果
    ui->textBrowser->clear();

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
