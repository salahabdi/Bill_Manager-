
#include "createnewaccount.h"
#include "ui_createnewaccount.h"
#include <QPixmap>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QComboBox>
#include <QLineEdit>

struct customerInfo {
  char firstName;
  char lastName;
  char userName;
  char passWord;
};

CreateNewAccount::CreateNewAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateNewAccount)


{

    ui->setupUi(this);
    QPixmap pix (":/new/prefix1/logoImg/finalLogo.png");
    ui -> label_11 -> setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));
    QStringList listStates=(QStringList()<< "  " <<"AL" << "AK" << "AZ" <<"AR" << "CA" << "CO" << "CT"<< "DE" << "FL"
                                   << "GA" << "HI" << "ID" <<"IL" << "IN" << "IA" << "KS" << "KY"<< "LA"
                                   << "ME" << "MD" << "MA" <<"MI" << "MN" << "MS" << "MO" << "MT"<< "NE"
                                   << "NV" << "NH" << "NJ" <<"NM" << "NY" << "NC" << "ND" << "OH"<< "OK"
                                   << "OR" << "PA" << "RI" << "SC" << "SD" << "TN" << "TX" << "UT" << "VT"
                                   << "VA" << "WA" << "WV" << "WI" << "WY");


    ui-> lineEdit_UserName ->setPlaceholderText(QString("6 CHARACTERS *"));
    ui-> lineEdit_PassWord ->setPlaceholderText(QString("8 CHARACTERS *"));
    ui-> lineEdit_FirstName ->setPlaceholderText(QString("Type here"));
    ui-> lineEdit_LastName ->setPlaceholderText(QString("Type here"));
    ui-> lineEdit_ZipCode ->setPlaceholderText(QString("Type here"));
    ui-> lineEdit_Day ->setPlaceholderText(QString("DD"));
    ui-> lineEdit_Month ->setPlaceholderText(QString("MM"));
    ui-> lineEdit_Year ->setPlaceholderText(QString("YYYY"));
    ui -> comboBox_State -> addItems(listStates);
    ui-> lineEdit_Email ->setPlaceholderText(QString("Type here"));
    ui-> lineEdit_PhoneNumber ->setPlaceholderText(QString("Type here"));

   // ui-> lineEdit_AdressLine1 ->setPlaceholderText(QString("#, street"));
   // ui-> lineEdit_AdressLine2 ->setPlaceholderText(QString("apt#, unit#"));

    ui-> lineEdit_City ->setPlaceholderText(QString("Type here"));
    ui-> comboBox_State->setPlaceholderText(QString("STATE"));

}

CreateNewAccount::~CreateNewAccount()
{
    delete ui;
}



void CreateNewAccount::on_pushButton_createAccount_clicked()
{
    QFile customerFile ("/Users/salah/Desktop/Bill_Manager/customerFile.txt");

    if(!customerFile.open(QIODevice::ReadWrite | QIODevice::Append)) {
        QMessageBox::warning(this,"title","file not opened");
    }
    else {

    QTextStream out(&customerFile);

//use # to seperate strings
    QString userName = ui -> lineEdit_UserName -> text();
    out << userName << "#";

    QString passWord = ui -> lineEdit_PassWord -> text();
    out << passWord << "#";

    QString firstName = ui -> lineEdit_FirstName -> text();
    out << firstName << "#";

    QString lastName = ui -> lineEdit_LastName -> text();
    out << lastName << "#";

    QString emailAdress = ui -> lineEdit_Email -> text();
    out << emailAdress << "#";

    QString phoneNumber = ui -> lineEdit_PhoneNumber -> text();
    out << phoneNumber << "#";

    QString DOB_month =  ui-> lineEdit_Month -> text();
    out << DOB_month << "-";

    QString DOB_day =  ui-> lineEdit_Day -> text();
    out << DOB_day << "-";

    QString DOB_Year =  ui-> lineEdit_Year -> text();
    out << DOB_Year << "#";

  //  QString adressLine1 = ui -> lineEdit_AdressLine1 -> text();
  //  out << adressLine1 << " ";

 //   QString adressLine2 = ui -> lineEdit_AdressLine2 -> text();
 //   out << adressLine2 << ", ";

    QString city = ui -> lineEdit_City -> text();
    out << city << ", ";

    QString states =  ui-> comboBox_State -> currentText();
    out << states << ", ";

    QString zipCode = ui -> lineEdit_ZipCode -> text();
    out << zipCode << "\n";



            customerFile.permissions();
            customerFile.flush();
            customerFile.close();
            close();

    }
}














