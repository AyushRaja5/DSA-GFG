#include<iostream>
using namespace std;
int LamutoPartition(int arr[], int l, int h){
    int pivot = arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

void LamutoQuickSort(int arr[], int l, int h){
    if(l<h){
        int p = LamutoPartition(arr,l,h);
        LamutoQuickSort(arr,l,p-1);
        LamutoQuickSort(arr,p+1,h);
    }
}
int main(){
    int a[] = {4,1,6,7,5,8,10};
    int n = 7;

    LamutoQuickSort(a,0,n-1);

    for(int x:a)cout<<x<<" ";
}