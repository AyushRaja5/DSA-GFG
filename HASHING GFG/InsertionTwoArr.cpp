#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int a[] = {10,20};
    int b[] = {20,30};
    unordered_set<int> arr;
    unordered_set<int> brr;
    for(int i=0;i<2;i++){
        arr.insert(a[i]);
    }
    for(int j=0;j<2;j++){
        brr.insert(b[j]);
    }

    // for( auto x: arr)cout<<x<<"\t";
    // cout<<endl;
    // for( auto x: brr)cout<<x<<"\t";
    int res=0;
    for(auto x : brr){
        if(arr.find(x)!=arr.end())res++;
    }
    cout<<"Result is: "<<res;
}