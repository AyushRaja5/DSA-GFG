#include<iostream>
using namespace std;

int Stock1(int arr[], int n){
    int profit=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[j]>arr[i]){
                profit = profit + (arr[j]-arr[i]) + ;
            }
        }
    }
    return profit;
}

int main(){
    int arr[] = {1,5,3,1,2,8};
    int n=6;
    cout<<Stock1(arr,n);
}