#ifndef __UTILS_H
#define __UTILS_H
#include <iostream>
#include <string>

std::string parse(const char *s);
void mkdir(std::string path);
void rmdir(std::string path);
void rm(std::string path);
char* mkchar(std::string s);
char* mkchar(char* s);
char* mkchar(int x);
#endif