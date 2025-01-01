#include "HashTable.hpp"
#include "Utils.hpp"

namespace HashTable{

    // Constructor
    template<class DataType>
    HashTable<DataType>::HashTable(const int& size):_length(0), _size(size){
        _table = new Row<DataType>*[size];

        for (int x = 0; x < size; x++) {
            _table[x] = new Row<DataType>(); 
        }
        
    }

    // private methods
    template<class DataType>
    int HashTable<DataType>::hash(const int& key)const{
        return key % _size;
    }

    // methods
    template <class DataType>
    Node<DataType>* HashTable<DataType>::search(const int &key){
        // check if table is empty
                
        if(isEmpty()) return 0;

        Row<DataType>* row = getRow(key);
        // check if row is empty
        if(row == 0) return 0;

        // check if key is exists in this row

        Node<DataType>* node = row->find(key);
        if (node == 0) return 0;
        
        return 0;
    }


    template<class DataType>
    void HashTable<DataType>::insert(const int& key, const DataType& value){
        const int index = hash(key);
        Row<DataType>* row = getRow(key);
        

        // cout << row->insert(key, value) << endl;
        row->insert(key, value);
        _length++;
    }


    // other
    template<class DataType> 
    Row<DataType>* HashTable<DataType>::getRow(const int& key)const{
        const int index = hash(key);
        return _table[index];
    }

    // status
    template<class DataType>
    int HashTable<DataType>::length()const{
        return _length;
    }
    template<class DataType>
    bool HashTable<DataType>::isEmpty()const{
        return _table == 0;
    }
    template<class DataType>
    bool HashTable<DataType>::isNotEmpty()const{
        return !isEmpty();
    }



    // Destructor
    template<class DataType>
    HashTable<DataType>::~HashTable(){
        // destroy table here
        delete _table;
    }
    
} // namespace HashTable
