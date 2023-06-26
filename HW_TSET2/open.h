#ifndef OPEN_H
#define OPEN_H

#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QFile>

bool opendatabase()
{
    QSqlDatabase Sopen;

    Sopen = QSqlDatabase::addDatabase("QSQLITE"); //创建数据库链接

    Sopen.open();

    Sopen.exec("create database if not exists shujuku.db");

    Sopen.setDatabaseName("shujuku.db");  //如果数据库不存在则创建数据库

    Sopen.open();


    QSqlQuery sqlQuery;  //建立表  -登录（账号，密码） -用户输入（时间，类型，内容，金额，心情，其他） -输出（预算等其他）

    sqlQuery.exec("CREATE TABLE Account(id INTEGER primary key AUTOINCREMENT,useraccount int,userpassword int)");

    sqlQuery.exec("CREATE TABLE Input(id INTEGER primary key AUTOINCREMENT,date time,type varchar,what varchar,money int,other int,mood varchar);");

    sqlQuery.exec("CREATE TABLE Output(id INTEGER primary key AUTOINCREMENT,day int,month int year int);");

    return true;

}

#endif //OPEN_H
