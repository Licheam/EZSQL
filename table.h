#ifndef __TABLE_H
#define __TABLE_H
#include <string>
#include <list>
#include <vector>
#include "condition.h"

struct tableheader {
    std::string colname;
    int type;
};

struct table {
    std::string tblname;
    std::list<tableheader*> *tblheaders;
    std::list<std::list<char*> > vallist;
};

void create_table(std::string tblname, std::list<tableheader*> *l);
void drop_table(std::string name);
void show_tables();
void init_tables();
std::list<std::string> get_tables();

void updates(table &tbl);
table get_table(std::string tblname);
void table_insert(std::string tblname, std::list<char *> *vals, std::list<std::string> *names = NULL);
void table_show(table &tbl);
void table_select(table &tbl, condition *root);
void table_reduce(table &tbl, std::list<std::string> &colnames);
void links(condition *cur, std::list<tableheader*> &ths, std::list<char *> &colvals);

#endif