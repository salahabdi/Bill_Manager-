/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#ifndef FORGOTPASSWORD_H
#define FORGOTPASSWORD_H

#include <QDialog>

namespace Ui {
class ForgotPassWord;
}

class ForgotPassWord : public QDialog
{
    Q_OBJECT

public:
    explicit ForgotPassWord(QWidget *parent = nullptr);
    ~ForgotPassWord();

private slots:
    //void on_pushButton_clicked();

    void on_pushButton_DisplayPassWord_clicked();



private:
    Ui::ForgotPassWord *ui;
};

#endif // FORGOTPASSWORD_H
