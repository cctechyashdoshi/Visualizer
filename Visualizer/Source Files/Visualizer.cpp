#include "../Header Files/Visualizer.h"
#include "../Header Files/Manager.h"

Visualizer::Visualizer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VisualizerClass)
{
    ui->setupUi(this);
    connect(ui->startButton, &QPushButton::clicked, this, &Visualizer::on_button_clicked);
}

Visualizer::~Visualizer()
{
}

void Visualizer::on_button_clicked() 
{
    QString name = ui->textBox->toPlainText();
    Manager manager;
    manager.managerMain(name.toStdString());
}