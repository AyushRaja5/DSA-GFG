#include<iostream>
#include<list>
using namespace std;

struct  myHash{
    int BUCKET;
    list<int>*table;
    
    myHash(int b){
        BUCKET =b;
        table = new list<int>[b];
    }
    
    void insert(int key){
        int hashid = key%BUCKET;
        table[hashid].push_back(key);
    }
    
    bool search(int key){
        int hasid = key%BUCKET;
        for(auto x: table[hasid]){ // ye linked list me iterate krega
            if(x==key)return true;
        }
        return false;
    }
    
    void remove(int key){
        int hasid = key%BUCKET;
        table[hasid].remove(key);
    }
};
int main(){

}