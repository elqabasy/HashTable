#ifndef HASH_TABLE_NODE_HPP
#define HASH_TABLE_NODE_HPP
#include<iostream>
using namespace std;

namespace HashTable{
    template <class DataType>
    class Node{
        private:
            int _key;
            Node* _next;
            DataType _value;
        public:
            // Constructor
            Node(const int& key, const DataType& value);
            Node(const int& key, const DataType& value, Node* next);
            

            // functionality

            // setters
            void setNext(Node* next);
            void setKey(const int& key);
            void setValue(const DataType& value);

            // special
            Node* appendNode(Node* node);

            // getters
            int getKey()const;
            Node* getNext()const;
            DataType getValue()const;


            // methods
            void display();
            string toString()const;

            Node* operator++();
            Node* operator++(int);
            
            // Destructor
            ~Node();
    };    
} // namespace Node
#include "../source/Node.cpp"
#endif // HASH_TABLE_NODE_HPP