#include "informations.h"
#include "./ui_informations.h"

Informations::Informations(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Informations)
{
    ui->setupUi(this);
}

Informations::~Informations()
{
    delete ui;
}




