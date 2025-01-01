#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
using namespace std;
#include <string>

namespace HashTableNamespace {

template<class DataType>
class Node {
private:
    int key;                 // Key is always an integer
    DataType value;          // Value is templated
    Node* next;

public:
    Node(int key, const DataType& value, Node* next = nullptr);

    void setNext(Node* next);
    Node* getNext() const;

    int getKey() const;
    DataType getValue() const;

    string toString()const;

    void display() const;
};

} // namespace HashTableNamespace

#include "../source/Node.cpp" // Include the implementation

#endif // NODE_HPP
