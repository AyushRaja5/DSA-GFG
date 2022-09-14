#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int l=0;
    int h=n-1;
    while(h>l){
        int temp = arr[l];
        arr[l]=arr[h];
        arr[h]= temp;
        l++;
        h--;
    }
}
void reverse1(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {2,3,4,5,6,7,8,9};
    reverse1(arr,8);
    // for(int i=0;i<8;i++){
    //     cout<<arr[i];
    // }
}