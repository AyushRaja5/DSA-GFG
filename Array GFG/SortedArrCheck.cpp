#include<iostream>
using namespace std;
bool sort(int arr[], int n){
    for(int i=0;i<n;i++){
        for (int j = i+1; j < n; j++){
            if(arr[j]<arr[i]) return false;         // Time = O(n^2)
        }
    }
    return true;
}

bool sort1(int arr[],int n){
    for(int i=1;i<n;i++){
        int first=i;
        int sec=i-1;
        if(arr[first]<arr[sec]){                // Time = O(n)
            return false;                       // Khud se banaye hai
        }
        first++;
        sec++;
    }
    return true;
}
bool sort2(int arr[],int n,int i=0){
    if(n==1 || n==0) return true;                                // Recursion
    if(arr[n-1]<arr[n-2]) return false;         // Time = O(1)
    sort2(arr,n-1);                             // Space = O(n)
}

bool sort3(int arr[],int n){
    for(int i=1;i<n;i++){                       // Sir bataye hai
        if(arr[i]<arr[i-1]) return false;       // Time = O(n)
    }                                           // Space = O(n^2)
    return true;
}
bool sort4(int arr[], int n){
    int first=0;
    int second =1;
    for(int i=0;i<n;i++){
        if(arr[first]>arr[second]){
            return false;
        }
        first++;
        second++;
    }
    return true;
}

int  main(){
    int arr[] = {21,45,65,77,87,92};
    int ar[]  = {42,2,53,26,11,41};
    int a[] = {10,10,10,10,10,10};
    cout<<sort3(a,6);
}