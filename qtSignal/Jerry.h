#ifndef JERRY_H
#define JERRY_H


//Jerry.h
#pragma once

#include <QObject>
#include <QDebug>
class Jerry : public QObject
{
    Q_OBJECT
public:
    Jerry(QObject *parent = nullptr) : QObject(parent)
    {
    }
public slots:
    void runAway()
    {
        qDebug() << u8"那只猫又来了，快溜！" ;
    }
};


#endif // JERRY_H
