#ifndef HASH_TABLE_ROW_HPP
#define HASH_TABLE_ROW_HPP
#include "Node.hpp"
#include <iostream>
using namespace std;

namespace HashTable{
    template <class DataType>
    class Row{
        private:
            int _length;
            Node<DataType>* _head;

        public:
            // Constructor
            Row();


            // methods
            void remove(const int& key);
            Node<DataType>* find(const int& key, Node<DataType>* prev)const;
            void insert(const int& key, const DataType& value);



            // methods
            void display()const;
            string toString()const;

            bool isEmpty()const;
            bool isNotEmpty()const;
            int length()const;

            // Destructor
            ~Row();
    };    
} // namespace HashTable


#include "../source/Row.cpp"
#endif // HASH_TABLE_ROW_HPP