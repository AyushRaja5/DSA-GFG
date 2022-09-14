#include<iostream>
using namespace std;
int linear(int arr[], int n, int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
}

int Binary(int arr[],int n, int x){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==x) return mid;
        if(arr[mid]<x){
            s = mid+1;
        }
        else if(arr[mid]>x){
            e = mid-1;
        }
         return -1;
    }

}

int main(){
    int arr[] = {2,5,8,31,122,314,654};
    int n=7;
    //cout<<bSearch(arr,n,122);
    cout<<Binary(arr,n,31);
    
}
