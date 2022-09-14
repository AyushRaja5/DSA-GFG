#include<iostream>
#include<vector>
using namespace std;
int peak(int arr[],int n){
    int s=0;
    int e = n-1;
    while(s<=e){
        int mid = (s+e)/2;
            if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid]>=arr[mid+1])) 
                return mid;
            else if(mid>0 && arr[mid-1]>=arr[mid]) e= mid-1;
            else s= mid+1;
    }
    return -1;
}

int main(){
    int arr[] = {10,30,15,5,23,90,67};
    cout<<peak(arr,7);
} 