
#include "Row.hpp"
#include <iostream>
#include <optional>
using namespace std;

namespace HashTable{
    // Constructor
    template<class DataType>
    Row<DataType>::Row():_length(0), _head(nullptr){
        
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

        if (_head == nullptr) {
            _head = new Node<DataType>(key, value);
        } else {
            _head->appendNode(new Node<DataType>(key, value));
        }
        _length++;
        
    }

    template<class DataType>
    Node<DataType>* Row<DataType>::previous(const int& key) const {
        Node<DataType>* prev = nullptr;
        for (Node<DataType>* it = _head; it != nullptr; it = it->getNext()) {
            if (it->getKey() == key) {
                return prev;
            }
            prev = it;
        }
        return nullptr;

    }


    template<class DataType>
    Node<DataType>* Row<DataType>::find(const int& key)const{
        for(Node<DataType>* it = _head; it != nullptr; it = it->getNext()){
            if (it->getKey() == key){
                return it;
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
