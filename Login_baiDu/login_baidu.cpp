#include "login_baidu.h"
#include "ui_login_baidu.h"

#include <QIcon>
#include<QSqlQuery>
#include<QSqlError>
#include<QMessageBox>
#include<QDebug>
#include<QSqlRecord>
#include <QSettings>
Login_BaiDu::Login_BaiDu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login_BaiDu)
{
    ui->setupUi(this);
    this->setWindowTitle(QString("百度登录"));
    this->setWindowIcon(QIcon(":/image/login.png"));
    //在构造函数中读取配置文件内容
    QSettings setting(QSettings::IniFormat,QSettings::SystemScope,"config_BaiDu");
    QString username=setting.value("username").toString();
    QString password=setting.value("password").toString();

    ui->username->setText(username);
    ui->password->setText(password);
}

Login_BaiDu::~Login_BaiDu()
{
    delete ui;
}

//注册
void Login_BaiDu::on_registBt_clicked()
{
    QString username=ui->username->text();
    QString password=ui->password->text();

    //打包sql语句
    QString sql=QString("insert into user(username,password) values('%1','%2')").arg(username).arg(password);
    //执行sql语句
    QSqlQuery query;
    if(!query.exec(sql)){
        qDebug()<<"注册失败";
        QMessageBox::warning(this,"注册","注册失败");
        qDebug()<<query.lastError().text();
        return;
    }
    qDebug()<<"注册成功";
    QMessageBox::warning(this,"注册","注册成功");
    return;
}

//登录
void Login_BaiDu::on_loginBt_clicked()
{
    //获取值
    QString username=ui->username->text();
    QString password=ui->password->text();
    //打包sql语句
    QString sql=QString("select * from user where username='%1' and password='%2'").arg(username).arg(password);
    //执行sql语句
    QSqlQuery query;
    if(!query.exec(sql)){
        qDebug()<<query.lastError().text();
    }
    //查看是否有数据返回
    if(query.next()){//指向第一条数据
        QMessageBox::warning(this,"登录","登陆成功");
        //记录用户名到配置文件
        if(ui->checkBox->isChecked()){
            //获取配置文件对象
            QSettings setting(QSettings::IniFormat,QSettings::SystemScope,"config_BaiDu"); //设置配置文件保存在C:/programer_data中
            setting.setValue("username",username);
            setting.setValue("password",password);
        }
    }else{
        QMessageBox::warning(this,"登录","登陆失败");
    }
    return;
}
