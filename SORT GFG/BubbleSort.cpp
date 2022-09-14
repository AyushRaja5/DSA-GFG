#include<iostream>
#include<algorithm>
using namespace std;
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
void BubbleSort1(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];    
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
}

void BubbleSort2(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void BubbleSort3(int arr[], int n){
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true; 
            }
        }
        if(swapped==false) break;
    }
}

void Bubble(int arr[], int n){
    bool flag=0;
    while(!flag){
        for(int i=0;i<n-2;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                flag = 0;
            }
        }
    }
}

int main(){
    int arr[] = {21,3,67,2,17,34};
    int n = 6;
    // SORT 1
    // sort(arr,arr+n);

    BubbleSort2(arr,n);
    for(int x:arr)
        cout<<x<<endl;
}
