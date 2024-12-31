#include  "Node.hpp"
#include <iostream>
using namespace std;


namespace HashTable{
    // Constructor
    template<class DataType>
    Node<DataType>::Node(const int& key, const DataType& value):_key(key), _value(value), _next(0){
        
    }
    template<class DataType>
    Node<DataType>::Node(const int& key, const DataType& value, Node* next):_key(key), _value(value), _next(next){
        
    }

    // special
    template<class DataType>
    Node<DataType>* Node<DataType>::appendNode(Node<DataType>* node){
        node->setNext(this->_next);
        this->_next = node;
        return node;
    }

    

    // functionality
    template<class DataType>
    Node<DataType>* Node<DataType>::operator++(){
        _next = _next->getNext();
        return _next;
    }

    template <class DataType>
    Node<DataType>* Node<DataType>::operator++(int){
        return _next = _next->getNext();
    }

    // setters
    template<class DataType>
    void Node<DataType>::setNext(Node* next){
        _next = next;
    }
    
    template<class DataType>
    void Node<DataType>::setKey(const int& key){
        _key = key;
    }
    
    template<class DataType>
    void Node<DataType>::setValue(const DataType& value){
        _value = value;
    }

    // getters
    template<class DataType>
    int Node<DataType>::getKey()const{
        return this->_key;
    }
    template<class DataType>
    Node<DataType>* Node<DataType>::getNext()const{
        return this->_next;
    }
    template<class DataType>
    DataType Node<DataType>::getValue()const{
        return this->_value;
    }


    // methods
    template<class DataType>
    void Node<DataType>::display(){
        cout << toString() << endl;
    }

    template<class DataType>
    string Node<DataType>::toString()const{
        return "toString(this)";    
    }
    // Destructor
    template<class DataType>
    Node<DataType>::~Node(){
        // destroy this node
    }

} // namespace Node
