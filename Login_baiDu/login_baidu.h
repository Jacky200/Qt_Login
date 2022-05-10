#ifndef LOGIN_BAIDU_H
#define LOGIN_BAIDU_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Login_BaiDu; }
QT_END_NAMESPACE

class Login_BaiDu : public QWidget
{
    Q_OBJECT

public:
    Login_BaiDu(QWidget *parent = nullptr);
    ~Login_BaiDu();

private slots:
    void on_registBt_clicked();

    void on_loginBt_clicked();

private:
    Ui::Login_BaiDu *ui;
};
#endif // LOGIN_BAIDU_H
