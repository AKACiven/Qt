#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>

class SecondWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit SecondWindow(QWidget *parent = nullptr);

signals:
    void back();

public slots:
};

#endif // SECONDWINDOW_H
