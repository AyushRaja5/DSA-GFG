#include<iostream>
using namespace std;
int RecursiveBinary(int arr[], int n, int x,int s, int e){
    if(s<e){
        int mid = (s+e)/2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]<x) RecursiveBinary(arr,n/2,x,mid+1,e);
        else if(arr[mid]>x) RecursiveBinary(arr,n/2, x, s, mid-1);
    }
    return -1;
}
int main()
{
    int arr[] = {2,5,8,31,122,314,654};
    int n=7;
    
    cout<<RecursiveBinary(arr,n,31, 0,6);
}
