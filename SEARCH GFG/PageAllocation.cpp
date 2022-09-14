#include<iostream>
using namespace std;
#include<climits>
bool isSolution(int x, int arr[], int n, int k){
    int count=1;
    int currSum=0;
    for(int i=0;i<n;i++){
        if(currSum + arr[i] <= x){
            currSum = currSum+arr[i];
        }
        else {
            count++;
            if(count>k || arr[i]>x){
                return false;
            }
             currSum=arr[i];
        }
    }
    return true;
}

int PagesAllocate(int arr[], int n, int k){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
    }
    int s = 0;
    int e = sum;
    int ans=-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(isSolution(mid,arr,n,k)){
            ans = mid;
            e = mid-1;
        }
        else s = mid+1;

        mid = s + (e-s)/2;
    }
    return ans;
    
}

int main(){
    int arr[] = {10,20,30,40};
    int k = 2;
    cout<<PagesAllocate(arr,4,k);
}