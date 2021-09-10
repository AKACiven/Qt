/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setMinimumSize(QSize(700, 500));
        MainWindow->setMaximumSize(QSize(700, 500));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(9, 76, 256, 381));
        textEdit->setMinimumSize(QSize(0, 0));
        textEdit->setMaximumSize(QSize(16777215, 16777215));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 75, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 50, 75, 16));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(271, 76, 421, 381));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(66);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setMinimumSize(QSize(0, 0));
        textBrowser->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 700, 26));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\350\276\223\345\205\245\345\214\272\345\237\237\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\350\276\223\345\207\272\345\214\272\345\237\237\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
