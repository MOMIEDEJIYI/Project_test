#include "Data_print.h"
#include <QDebug>

Data_print::Data_print() {}
Data_print::~Data_print() {}

void Data_print::print_int(int a){
    qDebug() << "int: " << a;
}

void Data_print::print_string(QString str){
    qDebug() << "string: " << str;
}

void Data_print::print_add(int x, int y){
    qDebug() << "x + y = " << x + y ;
}
