#ifndef __CONDITION_H
#define __CONDITION_H
#include "table.h"

struct condition {
    condition *left, *right;
    int type;//1 comp, 2 logic, 3 entity
    int opt;//comp1~6 or logic1~3
    
    int entity;//1 num, 2 string, 3 column
    int *val1;
    string *val2;
    string colname;
    char colval;
};


#endif