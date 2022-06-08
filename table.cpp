#include "table.h"
#include "database.h"
using namespace std;

#define PATH ("./" + dbusing + "/tables")
#define DBPATH(x) ("./" + dbusing + "/" + x)


void updates(list<string>& names) {
    FILE *f = fopen(PATH.c_str(), "w+");
    for(auto s:names) {
        fputs(s.c_str(), f); fputs("\n", f);
    }
    fclose(f);
}

string parse(const char *s) {
    if(*s) {
        return string(s);
    } else {
        int *x = (int*)malloc(4);
        strncpy((char*)x, s+1, 4);
        return to_string(*x);
    }
}

void write_nxt(FILE *f, const char *s) {
    if(*s) {
        fprintf(f, "%s ", s+1);
    } else {
        int *x = (int*)malloc(4);
        strncpy((char*)x, s+1, 4);
        fprintf(f, "%d ", *x);
    }
}

void updates(table &tbl) {
    FILE *f = fopen(DBPATH(tbl.tblname).c_str(), "w+");
    fprintf(f, "%lu ", tbl.tblheaders->size());
    for(auto x:*(tbl.tblheaders))
        fprintf(f, "%d %s ", x->type, x->colname.c_str());
    fputc('\n', f);
    for(auto &l:tbl.vallist) {
        for(auto x:l) {
            if(x == NULL) {
                write_nxt(f, " NULL\0");
            } else write_nxt(f, x);
        }
        fputc('\n', f);
    }
    fclose(f);
}

void create_table(std::string tblname, std::list<tableheader*> *l) {
    if(dbusing == "") {
        cout<<"Error: not using any database"<<endl;
        return;
    }
    auto tbls = get_tables();
    for(auto it=tbls.begin();it!=tbls.end();it++) {
        if(*it == tblname) {
            cout<<"ERROR: "+ tblname +" already exist!"<<endl;
            return;
        }
    }
    FILE *f = fopen(PATH.c_str(), "a");
    fputs(tblname.c_str(), f); fputs("\n", f);
    fclose(f);
    f = fopen(DBPATH(tblname).c_str(), "w+");
    fprintf(f, "%lu ", l->size());
    for(auto x:*l) {
        fprintf(f, "%d %s ", x->type, x->colname.c_str());
    }
    fputc('\n', f);
    fclose(f);
}

void drop_table(std::string tblname) {
    if(dbusing == "") {
        cout<<"Error: not using any database"<<endl;
        return;
    }
    auto tbls = get_tables();
    for(auto it=tbls.begin();it!=tbls.end();it++) {
        if(*it == tblname) {
            tbls.erase(it);
            updates(tbls);
            rm(DBPATH(tblname));
            return;
        }
    }
    cout<<"ERROR: "+ tblname +" doesn't exist!"<<endl;
}
void show_tables() {
    auto l = get_tables();
    cout<<"tables"<<endl;
    for(auto x:l) {
        cout<<x<<endl;
    }
    cout<<l.size()<<" found!"<<endl;
}

void init_tables() {
    FILE *f = fopen(PATH.c_str(), "a");
    fclose(f);
}

list<string> get_tables() {
    ifstream inf(PATH);
    list<string> l;
    string s;
    while(inf>>s) l.push_back(s);
    inf.close();
    return l;
}

char *read_nxt(ifstream &inf, tableheader th) {
    string s;
    if(!(inf>>s) || s=="NULL") return NULL;
    if(!th.type) {
        int d = atoi(s.c_str());
        return mkchar(d);
    } else {
        return mkchar(s);
    }
}

table get_table(std::string tblname) {
    ifstream inf(DBPATH(tblname));
    int len;
    inf>>len;
    table tbl;
    list<tableheader*> *l = new list<tableheader*>();
    for(int i=0;i<len;i++) {
        tableheader *th = new tableheader();
        inf>>th->type>>th->colname;
        l->push_back(th);
    }
    tbl.tblheaders = l;
    tbl.tblname = tblname;
    list<list<char*>> vlist;

    while(true) {
        bool tbend=false;
        vlist.push_back(list<char*>());
        for(auto th:*tbl.tblheaders) {
            char *t = read_nxt(inf, *th);
            if(!t) {tbend = true;break;}
            vlist.back().push_back(t);
        }
        if(tbend) break;
    }
    vlist.pop_back();
    tbl.vallist = vlist;
    inf.close();
    return tbl;
}

void table_insert(std::string tblname, std::list<char *> *vals, std::list<string> *names) {
    auto tbl = get_table(tblname);
    list<tableheader*> ths = *tbl.tblheaders;
    if(names == NULL) {
        names = new list<string>();
        for(auto th:ths) {
            names->push_back(th->colname);
        }
    }
    if(names->size()!=vals->size()) {
        cout<<"Error: values size not right!"<<endl;
        return;
    }
    list<char*> fvals;
    int i=0;
    for(auto th:ths) {
        bool notnull = false;
        auto i1=names->begin();
        auto i2=vals->begin();
        for(;i1!=names->end() && i2!=vals->end();i1++,i2++) {
            if(th->colname == *i1) {
                fvals.push_back(*i2);
                notnull = true;
                break;
            }
        }
        if(!notnull) fvals.push_back(NULL);
        i++;
    }
    tbl.vallist.push_back(fvals);
    updates(tbl);
}