#include "database.h"
#include "table.h"
using namespace std;

std::string dbusing;

void init() {
    dbusing = "";
    FILE *f = fopen("./databases", "a");
    fclose(f);
}

void updates(list<string> names) {
    FILE *f = fopen("./databases", "w+");
    for(auto s:names) {
        fputs(s.c_str(), f); fputs("\n", f);
    }
    fclose(f);
}

void create_database(string dbname) {
    auto l = get_databases();
    for(auto it=l.begin();it!=l.end();it++) {
        if(*it == dbname) {
            cout<<"ERROR: "+ dbname +" already exist!"<<endl;
            return;
        }
    }
    FILE *f = fopen("./databases", "a");
    fputs(dbname.c_str(), f); fputs("\n", f);
    fclose(f);
    mkdir("./" + dbname);
}

void drop_database(string dbname) {
    auto l = get_databases();
    for(auto it=l.begin();it!=l.end();it++) {
        if(*it == dbname) {
            l.erase(it);
            rmdir("./" + dbname);
            updates(l);
            return;
        }
    }
    cout<<"ERROR: "+ dbname +" not exist!"<<endl;
}

void show_databases() {
    auto l = get_databases();
    cout<<"Databases"<<endl;
    for(auto &s:l) {
        cout<<s<<endl;
    }
    cout<<l.size()<<" found"<<endl;
}

void use_database(string dbname) {
    dbusing = dbname;
    init_tables();
}

list<string> get_databases() {
    ifstream inf("./databases");
    list<string> l;
    string s;
    while(inf>>s) l.push_back(s);
    inf.close();
    return l;
}