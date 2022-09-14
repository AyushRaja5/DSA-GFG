#include<iostream>
using namespace std;
void found(int arr[], int n){
     int sum= 0;
    int arr[n]= {1,2,4,5};
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int res = n*(n+1)/2;
    cout<<res-sum<<endl;
}
int find(int arr[], int n,int x){
    int p = n/2;
    for(int i=0;i<n;i++)[
        if(arr[i]>x){
            find(arr,p,x);
        }
        if(arr[i]<x){
            find(arr,p,x);
        }
    ]

}
int main(){
   
}