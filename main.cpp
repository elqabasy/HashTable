#include <iostream>
using namespace std;
#include "HashTable.hpp"
#include <fmt/format.h>




int main(){
    HashTable::HashTable<int> table(10);
    
    for (int x = 0; x < 10  ; x++)
    {
        table.insert(x+1, x*3);
    }
    // cout << "enable_if"<< endl;
    for (int  x = 0; x < table.length(); x++)
    {
        cout << table.search(1)->getValue() << endl;
    }
    
    cout << "end" << endl;
    // table.insert(2, 151);
    
    // cout << "Node" << endl;
    // cout << table.search(1) << endl;
    // cout << "Node" << endl;
    
    return EXIT_SUCCESS;
}
