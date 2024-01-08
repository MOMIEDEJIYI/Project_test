#include "Data_cal.h"
#include <QDebug>

Data_cal::Data_cal() {}

Data_cal::~Data_cal(){}

bool Data_cal::add(int x, int y){
    qDebug() << "x + y = " << x + y;
    return true;

}

int Data_cal::multiply(int x, int y){
    qDebug() << "x * y = " << x * y;
    return x * y;
}

bool Data_cal::sub(int x, int y){
    qDebug() << "x - y = " << x - y;
    return true;
}

bool Data_cal::except(int x, int y){
    qDebug() << "x / y = " << x / y;
    return true;
}
