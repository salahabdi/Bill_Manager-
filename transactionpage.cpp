#include "transactionpage.h"
#include "ui_transactionpage.h"
#include <QMessageBox>

TransactionPage::TransactionPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TransactionPage)
{
    ui->setupUi(this);
}

TransactionPage::~TransactionPage()
{
    delete ui;
}


void TransactionPage::on_pushButton_logout_clicked()
{
    QMessageBox::information(this, "Log out", "Are you sure you want to log out");
    hide();
}

// create a pop out page that has a list of question to add new creditor

/* void TransactionPage::on_pushButton_AddCreditors_clicked()
{

} */

// update the creditor that you chose using the checkbox

/* void TransactionPage::on_pushButton_updateCreditors_clicked()
{

}*/
