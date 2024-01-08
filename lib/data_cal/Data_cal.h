#ifndef DATA_CAL_H
#define DATA_CAL_H

#include "data_cal_global.h"

class DATA_CAL_EXPORT Data_cal
{
public:
    Data_cal();
    ~Data_cal();

    bool add(int, int);
    int multiply(int, int);
    bool sub(int,int);
    bool except(int, int);
};

#endif // DATA_CAL_H
