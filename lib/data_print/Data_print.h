#ifndef DATA_PRINT_H
#define DATA_PRINT_H

#include "data_print_global.h"

class DATA_PRINT_EXPORT Data_print
{
public:
    Data_print();
    ~Data_print();

    void print_int(int);
    void print_string(QString);
    void print_add(int, int);
};

#endif // DATA_PRINT_H
