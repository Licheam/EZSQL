#include "y.tab.h"
#include "database.h"

int main() {
    init();    
    std::cout<<"SQL>>";
    while(yyparse()) ;
    return 0;
}