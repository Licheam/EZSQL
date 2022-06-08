#ifndef __TABLE_H
#define __TABLE_H
#include <string>
#include <list>
#include <vector>

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
void table_insert(std::string tblname, std::list<char *> *vals, std::list<std::string> *names = NULL);

#endif