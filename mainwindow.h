#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <memory>
#include <QMainWindow>

#include "weather.h"
#include "ui_main.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow(){};

private:
    void setupWidgets();

    std::unique_ptr<Ui_MainWindow> ui;
    std::unique_ptr<Weather> mWeather;
};
#endif // MAINWINDOW_H
