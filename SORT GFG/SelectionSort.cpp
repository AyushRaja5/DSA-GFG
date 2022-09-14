#include<iostream>
#include<math.h>
using namespace std;

void SelectionSort1(int arr[], int n){
    int temp[n];
    for(int i=0;i<n;i++){
        int minInd=0;
        for(int j=1;j<n;j++){
            if(arr[minInd]>arr[j]){
                minInd = j;
            }
        }
        temp[i] = arr[minInd];
        arr[minInd] = INFINITY;
    }
    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }
}


void SelectionSort2(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int minInd = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minInd])
                minInd =j;
        }
        int temp = arr[i];
        arr[i] = arr[minInd];
        arr[minInd] = temp;
    }
}
int main(){
    int arr[] = {21,3,67,2,17,34};
    int n = 6;

     SelectionSort2(arr,n);
    for(int x:arr)
        cout<<x<<endl;
}