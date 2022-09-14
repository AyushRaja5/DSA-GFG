#include<iostream>
using namespace std;
int FirstOccurance(int arr[],int s, int e, int x){
    if(s>e) return -1;
    int mid = (s+e)/2;
    if(arr[mid]<x){
        FirstOccurance(arr,mid+1,e,x);
    }
    if(arr[mid]>x){
        FirstOccurance(arr,s,mid-1,x);
    }
    else{
        if(arr[mid-1]!=arr[mid] || mid==0){
            return mid;
        }
        else return FirstOccurance(arr,s,mid-1,x);
    }
}

int FirstOccuranace2(int arr[], int n, int x){
    int s=0;
    int e= n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]>x){
            e=mid-1;
        }
        else if(arr[mid]<x){
            s = mid+1;
        }
        else{
            if(arr[mid]==arr[mid-1]){
                e = mid-1;
            }
            else return mid;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,10,10,10,20,20,40};
    int n=7;

    int a[] = {98765, 99300, 99455, 99500, 99555};
    // cout<<FirstOccurance(a,5,99555);
    cout<<FirstOccuranace2(a,5,99555);
}
