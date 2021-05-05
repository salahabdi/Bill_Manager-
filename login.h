/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "createnewaccount.h"
#include "forgotpassword.h"
#include "transactionpage.h"


QT_BEGIN_NAMESPACE
namespace Ui { class LOGIN; }
QT_END_NAMESPACE

class LOGIN : public QMainWindow
{
    Q_OBJECT

public:
    LOGIN(QWidget *parent = nullptr);
    ~LOGIN();

private slots:


    void on_commandLinkButton_CreatAccount_clicked();

    void on_Login_Button_clicked();


    //void on_commandLinkButton_ForgotMyPassword_clicked();


    void on_commandLinkButton_ForgotMyPassword_clicked();

    //void on_Login_Button_clicked();

private:
    Ui::LOGIN *ui;
    TransactionPage *transactionpage;



};
#endif // LOGIN_H
