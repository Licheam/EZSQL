#ifndef __CONDITION_H
#define __CONDITION_H
#include <list>
#include <string>

struct condition {
    condition *left, *right;
    int type;//1 comp, 2 logic, 3 entity
    int opt;//comp1~6 or logic1~3 or entity 1~3
    
    int num;
    std::string str;
    std::string colname;
    std::list<char *>::iterator colval;
};

bool calc(condition *root);

#endif