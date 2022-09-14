#include<bits/stdc++.h>
using namespace std;
int subArrwithequal0and1(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0)arr[i]=-1;
    }
    int prefix=0;
    unordered_map<int,int>mp;
    int j=0,res,k=0;
    for(int i=0;i<n;i++){
        prefix += arr[i];
        if(prefix==0) k=i;
        if(mp.find(prefix)!=mp.end())k=i;
    }
}
int main(){
    int n=7;
    int arr[n] ={1,0,1,1,1,0,0} ;

}