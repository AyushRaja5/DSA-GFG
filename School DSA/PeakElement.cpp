#include<iostream>
using namespace std;
void replace(int arr[], int n){
    for(int i=n;i>n;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = -1;
}
void change(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i=1;i<n;i++){
        int t = arr[n-i+1];
        arr[n-i+1] = arr[i];
        arr[i]=t;
    }
    
}
int main(){
    //int n=7;  int a[8] = {-1,-3,-7,4,5,6,8,9};
    //int arr[n] = {10,20,15,2,23,90,67};
    // for(int i=0;i<n;i++){
    //     if(i==0){
    //         if(arr[i]>arr[i+1]){
    //             cout<<arr[i];
    //         }
    //     }
    //     if(i==(n-1)){
    //         if(arr[i]>arr[i-1]){
    //             cout<<arr[i];
    //         }
    //     }
    //     //cout<<arr[i]<<endl;
    //     if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
    //         cout<<arr[i]<<'\t';
    //     }
    // }
    //replace(arr,7);
    int n=8;
    int a[8] = {-1,-3,-7,4,5,6,8,9};
    change(a,8);
    for(int i=0;i<n;i++){
        cout<<a[i]<<'\t';
    }
}
