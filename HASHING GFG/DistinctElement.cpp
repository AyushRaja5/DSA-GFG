#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int arr[] = {15,12,13,12,13,13,18};
    int ar[] = {10,10,10};
    unordered_set<int> s;
    for(int i=0;i<3;i++){
        s.insert(ar[i]);
    }
    cout<<s.size();
}
