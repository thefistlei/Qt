#ifndef TOM_H
#define TOM_H

//Tom.h
#pragma once

#include <QObject>
#include <QDebug>
class Tom : public QObject
{
    Q_OBJECT
public:
    Tom(QObject *parent = nullptr) : QObject(parent)
    {
    }
    void miaow()
    {
        qDebug() <<  u8"喵!" ;
        emit miao();
    }
signals:
    void miao();
};

#endif // TOM_H
