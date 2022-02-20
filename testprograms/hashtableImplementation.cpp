#include <iostream>
#include <cstring>

// Implement hash table in C++.
// You will need to implemet isEmpty(), insertData(), removeData() and printAll()

class HashTable {

    private:
        int hashtable = 10;
        list<pair<int, string>> table[hashtable];

    public:
        void isEmpty(int key) const;
        //void insertData(int key, string value);
        //void removeData(int key);
        int hashFunction(int key);
        //void printAll();
}

int HashTable :: hashFunction(int key) {
    int hashkey = key%hashtable;
    return hashkey;
}

void HashTable :: insertData(int key, string value) {
    int hashKey = hashFunction (key);
    
    auto& cell = table[hashkey];
    auto& bIter = begin(cell);

    boolean isKeyPresent = false;
    for(; bIter != end(cell); bIter++)
    {
        if (bIter->first == key)
        {
            isKeyPresent = true;
            
            break;
        }
    }

}

void HashTable :: isEmpty(int key) {
    int hashkey = hashFunction(key);

    auto& cell = table[hashkey];
    auto& bIter = begin(cell);

}


