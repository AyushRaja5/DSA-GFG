#include<iostream>
#include<vector>
using namespace std;

struct myHash{
    int tablecapacity;
    vector<int> hashTable;
    myHash(int cap){
        tablecapacity = cap;
        for(int i=0;i<tablecapacity;i++){
            hashTable[i]=-1;
        }
    }

    
    void insert(int key){
        int hashid = key%tablecapacity;
        if(hashTable[hashid]==-1)hashTable[hashid]=key;  
        else{
            int count=0;
            if(hashTable[hashid]==key) return;
            int nh = (hashid+count)%tablecapacity;
           while(count<tablecapacity && hashTable[nh]!=-1){
                count++;
                nh = (hashid+count)%tablecapacity;
           }
           hashTable[nh] = key;
        }
    }

    void del(int key){
        int hashid = key%tablecapacity;
        if(hashTable[hashid]!=-1) hashTable[hashid]=-1;
        else{
            int count=0,nh;
            while(count<tablecapacity && hashTable[hashid]!=-1){
                count++;

            }
        };
    }
    
    bool search(int key){
        int hashid = key%tablecapacity;
        int i=hashid;
        while(hashTable[i]!=-1 && i<=hashid){
            if(hashTable[hashid]==key) return true;
            i = (i+1)%tablecapacity;
        }
        return false;
    }
};

int main(){
    myHash mh(7);

}

