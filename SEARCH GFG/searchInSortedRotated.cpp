#include<iostream>
using namespace std;    //0   3    200
int Bin(int arr[], int s, int e, int X){
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==X) return mid;
        if(arr[mid]<X){
            s=mid+1;
        }
        else  e = mid-1;
       
    }
    return -1;
}


int Search(int arr[],int n, int X){
    int s=0;
    int e= n-1;
    while (s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==X) return mid;
        if(arr[s]<arr[mid]){
            if(arr[0]<=X && X<arr[mid]){
               e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        else{
            if(arr[mid+1]<=X && X<=arr[e]){
               s = mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int ar[] = {12,34,56,78,90,100,123,200,342};
    int arr[] = {100,200,300,500,20,40,80};
    cout<<Search(arr,7,300);
}