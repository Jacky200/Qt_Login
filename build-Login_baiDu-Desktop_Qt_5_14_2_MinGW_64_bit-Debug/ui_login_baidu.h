/********************************************************************************
** Form generated from reading UI file 'login_baidu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_BAIDU_H
#define UI_LOGIN_BAIDU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_BaiDu
{
public:
    QLineEdit *username;
    QLineEdit *password;
    QCheckBox *checkBox;
    QPushButton *loginBt;
    QPushButton *forgetBt;
    QPushButton *registBt;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Login_BaiDu)
    {
        if (Login_BaiDu->objectName().isEmpty())
            Login_BaiDu->setObjectName(QString::fromUtf8("Login_BaiDu"));
        Login_BaiDu->resize(437, 449);
        Login_BaiDu->setToolTipDuration(-1);
        Login_BaiDu->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton#loginBt{\n"
"	border:1px solider#b8b8b8;\n"
"	background-color: rgb(78, 110, 242);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton#loginBt:hover{\n"
"	border:1px solider#b8b8b8;\n"
"	background-color: rgb(78, 40, 242);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton#forgetBt{\n"
"	\n"
"	color: rgb(78, 110, 242);\n"
"}\n"
"QPushButton#forgetBt:hover{\n"
"	\n"
"	color: rgb(78, 190, 242);\n"
"}\n"
"QPushButton#registBt{\n"
"	\n"
"	color: rgb(78, 110, 242);\n"
"}\n"
"QPushButton#registBt:hover{\n"
"	\n"
"	color: rgb(78, 190, 242);\n"
"}\n"
"\n"
"QCheckBox{\n"
"	color: rgb(100, 128, 244);\n"
"}"));
        username = new QLineEdit(Login_BaiDu);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(30, 90, 361, 61));
        QFont font;
        font.setPointSize(13);
        username->setFont(font);
        username->setToolTipDuration(0);
        username->setFrame(true);
        password = new QLineEdit(Login_BaiDu);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(30, 170, 361, 61));
        password->setFont(font);
        checkBox = new QCheckBox(Login_BaiDu);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(30, 250, 91, 19));
        loginBt = new QPushButton(Login_BaiDu);
        loginBt->setObjectName(QString::fromUtf8("loginBt"));
        loginBt->setGeometry(QRect(30, 300, 361, 61));
        forgetBt = new QPushButton(Login_BaiDu);
        forgetBt->setObjectName(QString::fromUtf8("forgetBt"));
        forgetBt->setGeometry(QRect(30, 390, 93, 28));
        forgetBt->setFlat(true);
        registBt = new QPushButton(Login_BaiDu);
        registBt->setObjectName(QString::fromUtf8("registBt"));
        registBt->setGeometry(QRect(150, 390, 93, 28));
        registBt->setFlat(true);
        widget = new QWidget(Login_BaiDu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 20, 361, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/image/login.png);"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout->addWidget(label_2);


        retranslateUi(Login_BaiDu);

        QMetaObject::connectSlotsByName(Login_BaiDu);
    } // setupUi

    void retranslateUi(QWidget *Login_BaiDu)
    {
        Login_BaiDu->setWindowTitle(QCoreApplication::translate("Login_BaiDu", "Login_BaiDu", nullptr));
        username->setPlaceholderText(QCoreApplication::translate("Login_BaiDu", "\350\264\246\345\217\267/\347\224\250\346\210\267\345\220\215", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("Login_BaiDu", "\345\257\206\347\240\201", nullptr));
        checkBox->setText(QCoreApplication::translate("Login_BaiDu", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        loginBt->setText(QCoreApplication::translate("Login_BaiDu", "\347\231\273\345\275\225", nullptr));
        forgetBt->setText(QCoreApplication::translate("Login_BaiDu", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        registBt->setText(QCoreApplication::translate("Login_BaiDu", "\346\263\250\345\206\214", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Login_BaiDu", "\347\224\250\346\210\267\345\257\206\347\240\201\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_BaiDu: public Ui_Login_BaiDu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_BAIDU_H
