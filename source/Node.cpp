#include "Node.hpp"
#include<iostream>
#include <fmt/format.h>
using namespace std;

namespace HashTableNamespace {

    template<class DataType>
    Node<DataType>::Node(int key, const DataType& value, Node* next)
        : key(key), value(value), next(next) {}

    template<class DataType>
    void Node<DataType>::setNext(Node* next) {
        this->next = next;
    }

    template<class DataType>
    Node<DataType>* Node<DataType>::getNext() const {
        return next;
    }

    template<class DataType>
    int Node<DataType>::getKey() const {
        return key;
    }

    template<class DataType>
    DataType Node<DataType>::getValue() const {
        return value;
    }


    template<class DataType>
    string Node<DataType>::toString()const{
        return  fmt::format("Node(key={}, value={})", getKey(), getValue());
    }

    template<class DataType>
    void Node<DataType>::display() const {
        cout << toString() << endl;
    }

}
