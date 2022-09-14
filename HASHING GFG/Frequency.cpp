#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int, int> m;
    int arr[] = {10,12,10,15,10,20,15,12,10};

    // for(int i=0;i<9;i++){
    //     m.insert({arr[i],0});
    // }
    for(int i=0;i<9;i++){
        m[arr[i]]++;
    }
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
}