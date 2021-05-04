/*
 * Ismail Mikou - CIT284BD2 - Final Project - Pr.Liz Miller
 */
#ifndef QUITDIALOG_H
#define QUITDIALOG_H

#include <QDialog>
#include "login.h"
#include "mainwindowadmin.h"

namespace Ui {
class QuitDialog;
}

class QuitDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QuitDialog(QWidget *parent = nullptr);
    ~QuitDialog();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::QuitDialog *ui;
    LOGIN *log;
    MainWindowAdmin *m;

};

#endif // QUITDIALOG_H
