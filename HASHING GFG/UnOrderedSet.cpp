#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(70);
    s.insert(13);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    for(auto i : s){
        cout<<i<<" ";
    }
}