#include<iostream>
using namespace std;
void insertionSort1(int arr[],int n){
    for(int i=0;i<n;i++){
        int key = arr[i];
        for(int j=i;j>=0;j--){
            if(arr[j]>key){
                arr[j+1] = arr[j];
                arr[j] = key;
            }
        }
    }
}
int main(){//         j  k
    int arr[] = {21,3,67,2,17,34};
    int n = 6;

     insertionSort1(arr,n);
    for(int x:arr)
        cout<<x<<endl;
}