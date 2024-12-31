
#include "Row.hpp"
#include <iostream>
using namespace std;

namespace HashTable{
    // Constructor
    template<class DataType>
    Row<DataType>::Row(){
        
    }

    // private methods
    

    // methods
    
    template<class DataType>
    void Row<DataType>::remove(const int& key){
        Node<DataType>* prev;
        Node<DataType>* result = find(key, prev);
        if(result != 0){
            prev->setNext(result->getNext());
            delete result;
        }
    }

    
    template<class DataType>
    void Row<DataType>::insert(const int& key, const DataType& value){
        Node<DataType>* result = find(key);

        if(result == 0){ // key not found
            // insert at head
            _head->appendNode(new Node(key, value));
            _length++;
            return ;
        }else{ // key is exists
            // update exists value based on logic
            result->setValue(value);
        }
    }

    template<class DataType>
    Node<DataType>* Row<DataType>::find(const int& key, Node<DataType>* prev)const{
        // 
        if (_head->getKey() == key){
            return prev = _head;
        }
        
        for(Node<DataType>* it = _head; it->_next != nullptr; it++){
            if (it->_next->getKey() == key){
                prev = it;
                return it->_next;
            }
        }
        return 0;
    }
   

    // methods
    template<class DataType>
    void Row<DataType>::display()const{
        cout << toString() << endl;
    }
    template<class DataType>
    string Row<DataType>::toString()const{
        return "Row()";
    }
    template<class DataType>
    bool Row<DataType>::isEmpty()const{
        return _head == nullptr;
    }

    template<class DataType>
    bool Row<DataType>::isNotEmpty()const{
        return !isEmpty();
    }

    template<class DataType>
    int Row<DataType>::length()const{
        return _length;
    }

    

    // Destructor
    template<class DataType>
    Row<DataType>::~Row(){
        
    }
} // namespace HashTable
