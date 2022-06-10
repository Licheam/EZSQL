#include "condition.h"
#include "table.h"
#include "utils.h"
#include <assert.h>
using namespace std;

bool isnum(condition *cur) {
    assert(cur->type==3);
    if(cur->opt == 1) return true;
    if(cur->opt == 3 && **(cur->colval) == 0)
        return true;
    return false;
}

int getnum(condition *cur) {
    if(cur->opt == 1) return cur->num;
    else if(cur->opt == 3 && **(cur->colval) == 0)
        return atoi(parse(*(cur->colval)).c_str());
    assert(0);
}

string getstr(condition *cur) {
    if(cur->opt == 2) return cur->str;
    else if(cur->opt == 3 && **(cur->colval) > 0)
        return parse(*(cur->colval));
    assert(0);
}

bool calc(condition *cur) {
    // cout<<"DEBUG: type "<<cur->type<<endl;
    // cout<<"DEBUG: opt "<<cur->opt<<endl;
    if(cur->type)
    assert(cur->type > 0);
    if(cur->type == 1) {
        if(isnum(cur->left) && isnum(cur->right)) {
            switch (cur->opt)
            {
            case 1:
                return getnum(cur->left)<getnum(cur->right);
            case 2:
                return getnum(cur->left)>getnum(cur->right); 
            case 3:
                return getnum(cur->left)<=getnum(cur->right); 
            case 4:
                return getnum(cur->left)>=getnum(cur->right); 
            case 5:
                return getnum(cur->left)==getnum(cur->right); 
            case 6:
                return getnum(cur->left)!=getnum(cur->right); 
            default:
                break;
            }
        } else if(!isnum(cur->left) && !isnum(cur->right)) {
            switch (cur->opt)
            {
            case 5:
                return getstr(cur->left)==getstr(cur->right); 
            case 6:
                return getstr(cur->left)!=getstr(cur->right); 
            default:
                break;
            }
        }
        cout<<"ERROR: cant compare this two types"<<endl;
    } else if(cur->type == 2) {
        assert(cur->opt > 0);
        if(cur->opt == 1) return calc(cur->left) || calc(cur->right);
        else if(cur->opt == 2) return calc(cur->left) && calc(cur->right);
        else return !calc(cur->right);
    }
}