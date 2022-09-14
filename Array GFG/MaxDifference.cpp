#include<iostream>
using namespace std;
#include<algorithm>
int maxdiff(int arr[], int n){
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[j]-arr[i])>res){
               res = arr[j]-arr[i];
            }
        }
    }
    return res;
}
int maxDiff(int arr[], int n){
    int res = arr[1]-arr[0];
    int min=arr[0];
    for(int j=1;j<n;j++){
        if(res<(arr[j]-res)){
            res = arr[j]-res;
        }
        if(arr[j]<min){
            min=arr[j];
        }
    }
    return res;
}
int main(){
    int n=7;
    int arr[n] = {2,3,10,6,4,8,1};
    int ar[n] = {7,9,5,6,3,2,1};
    int a[] = {10,20,30};
    cout<<maxDiff(a,3);

}