#include<iostream>
using namespace std;
int count(int arr[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==0){
            s = mid+1;
        }
        else {
            if(arr[mid]!=arr[mid-1] || mid==0){
                return mid;
            }
            else e = mid-1;
        }
    }
}
int main(){
    int arr[] = {1,1,1,1,1,1,1,1,1,1};
    int n = 10;
    cout<<n-count(arr,10);
}