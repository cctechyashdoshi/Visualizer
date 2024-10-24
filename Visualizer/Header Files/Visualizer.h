#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Visualizer.h"

class Visualizer : public QMainWindow
{
    Q_OBJECT

public:
    Visualizer(QWidget *parent = nullptr);
    ~Visualizer();

private slots:
    void on_button_clicked();

private:
    class Ui::VisualizerClass* ui;
};