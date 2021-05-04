#ifndef TRANSACTIONPAGE_H
#define TRANSACTIONPAGE_H

#include <QDialog>

namespace Ui {
class TransactionPage;
}

class TransactionPage : public QDialog
{
    Q_OBJECT

public:
    explicit TransactionPage(QWidget *parent = nullptr);
    ~TransactionPage();

private slots:


    void on_pushButton_logout_clicked();

private:
    Ui::TransactionPage *ui;
};

#endif // TRANSACTIONPAGE_H
