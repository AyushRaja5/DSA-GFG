#include<iostream>
using namespace std;
int last(int arr[], int n, int X){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid =(s+e)/2;
        if(arr[mid]<X) s = mid+1;
        else if(arr[mid]>X) e= mid-1;
        else{
            if(arr[mid]!=arr[mid+1] || mid==n-1) return mid;
            else s= mid+1;
        }
    }
    return -1;
}

int first(int arr[], int n, int X){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid =(s+e)/2;
        if(arr[mid]<X) s = mid+1;
        else if(arr[mid]>X) e= mid-1;
        else{
            if(arr[mid]!=arr[mid-1] || mid==0) return mid;
            else e = mid-1;
        }
    }
    return -1;
}
int main(){
  int arr[] = {5,15,20,20,40,40,40,50};
    int l = last(arr,8,20);
    int f = first(arr,8,20);
    if(f==-1) cout<<0;
    cout<<l-f+1;
}