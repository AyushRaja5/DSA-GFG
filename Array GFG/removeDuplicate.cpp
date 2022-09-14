#include<iostream>
using namespace std;
int duplicate1(int arr[], int n){
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(int i=1; i<n;i++){
        if(arr[i]!=temp[res-1]){
            temp[res] = arr[i];
            res++;
        }
    }

    for(int i=0;i<res;i++){
        arr[i]=temp[i];
    }
    return res;
}
int duplicate2(int arr[], int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

int main()
{
    int n=9;
    int arr[n]= {5,3,42,42,5,31,23,55,76};
    int ar[n] = {10,10,10,10,10,10,10,10,10}; 
    int a[7] = {10,20,20,20,30,30,30};
    int nt = duplicate1(ar,9);
    int ne = duplicate2(a,7);
    for(int i=0;i<ne;i++)cout<<a[i]<<"\t";
}
