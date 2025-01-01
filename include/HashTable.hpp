#ifndef HASH_TABLE_HPP
#define HASH_TABLE_HPP
#include "Row.hpp"
#include "Utils.hpp"
#include "Node.hpp"

namespace HashTable{
    template<class DataType>
    class HashTable{
        private:            
            int _length, _size;
            Row<DataType>** _table;

            // methods
            int hash(const int& key)const;
        public:
            // Constructor
            HashTable(const int& size);
            
            // methods
            Node<DataType>* search(const int& key);
            void insert(const int& key, const DataType& value);


            // status
            int length()const;
            bool isEmpty()const;
            bool isNotEmpty()const;


            // other
            Row<DataType>* getRow(const int& key)const;

            
            // Destructor
            ~HashTable();
    };    
} // namespace HashTable


#include "../source/HashTable.cpp"
#endif // HASH_TABLE_HPP