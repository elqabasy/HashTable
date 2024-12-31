#include "Utils.hpp"

namespace HashTable
{
    namespace Utils{
        // Constructor
        template<class DataType>
        Result<DataType>::Result(const bool& status):status(status), msg(""){
            
        }
        
        template<class DataType>
        Result<DataType>::Result(const bool& status, const string& msg):status(status), msg(msg){
            
        }
        
        template<class DataType>
        Result<DataType>::Result(const bool& status, const string& msg, const optional<DataType>& value):status(status), msg(msg), value(value){
            
        }
    
    }
} // namespace HashTable