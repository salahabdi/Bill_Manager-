
#ifndef CREATENEWACCOUNT_H
#define CREATENEWACCOUNT_H

#include <QDialog>

namespace Ui {
class CreateNewAccount;
}

class CreateNewAccount : public QDialog
{
    Q_OBJECT

public:
    explicit CreateNewAccount(QWidget *parent = nullptr);
    ~CreateNewAccount();

private slots:
    void on_pushButton_createAccount_clicked();

private:
    Ui::CreateNewAccount *ui;
};

#endif // CREATENEWACCOUNT_H
