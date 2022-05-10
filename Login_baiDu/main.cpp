#include "login_baidu.h"

#include <QApplication>
#include<QSqlDatabase>
#include<QSqlError>
#include<QDebug>
#include<QSqlQuery>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //创建数据库句柄
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    //设置数据库名
    db.setDatabaseName("my.db");
    if(!db.open()){
        qDebug()<<db.lastError().text();
    }
    //创建表格
    QString sql="create table if not exists user(id integer primary key autoincrement,"
                        "username varchar(256) unique,password varchar(256))";
    //创建执行语句
    QSqlQuery query;
    if(!query.exec(sql)){
        qDebug()<<query.lastError().text();
    }
    Login_BaiDu w;
    w.show();
    return a.exec();
}
