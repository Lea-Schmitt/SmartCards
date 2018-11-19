#include "smartcards.h"
#include "ui_smartcards.h"

SmartCards::SmartCards(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SmartCards)
{
    ui->setupUi(this);
}

SmartCards::~SmartCards()
{
    delete ui;
}
