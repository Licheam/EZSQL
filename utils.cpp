#include "utils.h"
#include "table.h"
using namespace std;

void mkdir(string path) {
    system(("mkdir " + path).c_str());
}

void rmdir(string path) {
    system(("rm -rf " + path).c_str());
}

void rm(string path) {
    system(("rm "+ path).c_str());
}

char* mkchar(std::string s) {
    char *t = (char*)malloc(s.size() + 2);
    strcpy(t+1, s.c_str());
    *t = s.size();
    return t;
}

char* mkchar(char* s) {
    char *t = (char*)malloc(strlen(s) + 2);
    strcpy(t+1, s);
    *t = strlen(s);
    return t;
}

char* mkchar(int x) {
    char *t = (char*)malloc(5);
    strncpy(t+1, (char*)(&x), 4);
    *t = 0;
    return t;
}

string parse(const char *s) {
    if(*s) {
        return string(s+1);
    } else {
        int *x = (int*)malloc(4);
        strncpy((char*)x, s+1, 4);
        return to_string(*x);
    }
}