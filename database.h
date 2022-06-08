#ifndef __DATABASE_H
#define __DATABASE_H

#include <string>
#include <iostream>
#include <fstream>
#include <list>
#include "utils.h"


extern std::string dbusing;

void init();
void create_database(std::string dbname);
void drop_database(std::string dbname);
void show_databases();
void use_database(std::string dbname);
std::list<std::string> get_databases();

#endif