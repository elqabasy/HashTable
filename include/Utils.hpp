#ifndef HASH_TABLE_UTILS_HPP
#define HASH_TABLE_UTILS_HPP
#include<iostream>
#include<optional>
using namespace std;

namespace HashTable{
    namespace Utils{
        

        template<class DataType>
        struct Result{
            // struct search result
            string msg;
            bool status;
            optional<DataType> value;

            // Constructor
            Result(const bool& status);
            Result(const bool& status, const string& msg);
            Result(const bool& status, const string& msg, const optional<DataType>& value);
        };
        
    } // namespace Utils
    
} // namespace HashTable


#include "../source/Utils.cpp"
#endif // HASH_TABLE_UTILS_HPP