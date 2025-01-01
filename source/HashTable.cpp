#include "HashTable.hpp"

namespace HashTableNamespace {

template<class DataType>
HashTable<DataType>::HashTable(int size)
    : capacity(size), table(size, nullptr) {}

template<class DataType>
HashTable<DataType>::~HashTable() {
    for (auto& node : table) {
        while (node) {
            Node<DataType>* temp = node;
            node = node->getNext();
            delete temp;
        }
    }
}

template<class DataType>
int HashTable<DataType>::hashFunction(int key) const {
    return key % capacity; // Simple modulo-based hash function
}

template<class DataType>
void HashTable<DataType>::insert(int key, const DataType& value) {
    int index = hashFunction(key);
    Node<DataType>* newNode = new Node<DataType>(key, value);

    if (!table[index]) {
        table[index] = newNode;
    } else {
        Node<DataType>* current = table[index];
        while (current->getNext()) {
            current = current->getNext();
        }
        current->setNext(newNode);
    }
}

template<class DataType>
bool HashTable<DataType>::remove(int key) {
    int index = hashFunction(key);
    Node<DataType>* current = table[index];
    Node<DataType>* prev = nullptr;

    while (current) {
        if (current->getKey() == key) {
            if (prev) {
                prev->setNext(current->getNext());
            } else {
                table[index] = current->getNext();
            }
            delete current;
            return true;
        }
        prev = current;
        current = current->getNext();
    }
    return false;
}

template<class DataType>
DataType HashTable<DataType>::search(int key) const {
    int index = hashFunction(key);
    Node<DataType>* current = table[index];

    while (current) {
        if (current->getKey() == key) {
            return current->getValue();
        }
        current = current->getNext();
    }
    throw runtime_error("Key not found");
}

template<class DataType>
void HashTable<DataType>::display() const {
    for (int i = 0; i < capacity; ++i) {
        cout << "Index " << i << ": ";
        Node<DataType>* current = table[i];
        while (current) {
            current->display();
            cout << " -> ";
            current = current->getNext();
        }
        cout << "nullptr" << endl;
    }
}

} // namespace HashTableNamespace
