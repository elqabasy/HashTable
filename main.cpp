#include <iostream>
using namespace std;
#include "HashTable.hpp"


int main(){
    HashTable::HashTable<int> table(10);
    table.insert(1, 150);
    
    // table.insert(2, 151);
    return EXIT_SUCCESS;
}
