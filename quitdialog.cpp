
#include "quitdialog.h"
#include "ui_quitdialog.h"
#include "mainwindowadmin.h"
#include "mainwindowcustomer.h"
#include "login.h"

QuitDialog::QuitDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuitDialog)
{
    ui->setupUi(this);
}
void QuitDialog::on_buttonBox_accepted()
{





}


void QuitDialog::on_buttonBox_rejected()
{
    hide();
}

QuitDialog::~QuitDialog()
{
    delete ui;
}
