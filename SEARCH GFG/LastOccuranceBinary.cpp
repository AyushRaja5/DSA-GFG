#include<iostream>
using namespace std;
int LastOccuranceRecursive(int arr[],int s, int  e,int X){
    if(s>e) return -1;
    int mid= (s+e)/2;
    if(arr[mid]<X) LastOccuranceRecursive(arr,mid+1,e,X);
    else if(arr[mid]>X) LastOccuranceRecursive(arr,s,mid-1,X);
    else{
        if(arr[mid]!=arr[mid+1]  /* OR  (mid==n-1) */ ) return mid;
        else LastOccuranceRecursive(arr,mid+1,e,X);
    }
}
int LastOccurance(int arr[], int n, int X){
    int s =0;
    int e = n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]<X) s= mid+1;
        else if(arr[mid]>X) e= mid-1;
        else {
            if(arr[mid]!=arr[mid+1] || mid==n-1) return mid;
            else s  = mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {5,15,20,20,40,40,40,50};
    cout<<LastOccurance(arr,8,50);
}
