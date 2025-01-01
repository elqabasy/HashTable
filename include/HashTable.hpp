#ifndef HASH_TABLE_HPP
#define HASH_TABLE_HPP

#include "Node.hpp"
#include <vector>
#include<iostream>
using namespace std;
#include <memory>
#include <functional>

namespace HashTableNamespace {
    template<class DataType>
    class HashTable {
        private:
            vector<Node<DataType>*> table;
            int capacity;

            int hashFunction(int key) const;

        public:
            // Constructor
            HashTable(int size = 10);


            // methods
            bool remove(int key);
            DataType search(int key) const;
            void insert(int key, const DataType& value);

            void display() const;


            // Destructor
            ~HashTable();
    };
} // namespace HashTable

#include "../source/HashTable.cpp" // Include the implementation

#endif // HASH_TABLE_HPP
