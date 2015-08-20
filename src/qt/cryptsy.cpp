#include "ui_cryptsy.h"
#include "guiutil.h"
#include "bitcoingui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Cryptsy::Cryptsy(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Cryptsy),
    model(0)
{
    ui->setupUi(this);
}
    void Cryptsy::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Cryptsy::~Cryptsy()
{
    delete ui;
}