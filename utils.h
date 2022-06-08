#ifndef __UTILS_H
#define __UTILS_H
#include <iostream>
#include <string>

void mkdir(std::string path);
void rmdir(std::string path);
void rm(std::string path);
char* mkchar(std::string s);
char* mkchar(char* s);
char* mkchar(int x);
#endif