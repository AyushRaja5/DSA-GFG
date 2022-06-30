#include<iostream>
using namespace std;
int max(int arr[],int n){
    int m=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[m]){
            m=i;
        }
    }
    return m;
}
int secondMax(int arr[],int n){
    int m = max(arr,n);
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[m]){             // Time = O(n)
            if(res==0){                 // Space = O(1)
                res=i;
            }
            else if(arr[i]>arr[res]){
                res=i;
            }
        }
    }
    return res;
}

int secondMax2(int arr[],int n){
    int m=0;             
    int res=0;                            // Time = O(n)
    for(int i=0;i<n;i++){              //  Space = O(1)
        if(arr[i]>arr[m]){
            res=m;
            m=i;
        }
        else if(arr[i]<arr[m] && arr[i]>arr[res]){
            res=i;
        }
    }
    return res;
}

int secondMax3(int arr[], int n){
    int res;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){          // Sort and then return second last element;
                res = arr[i];           // Time = O(n^2)
                arr[i] = arr[j];        // Space = O(1)
                arr[j] = res;
            }
        }
    }
    return arr[n-2];
}
int main(){
    int arr[] = {200,13,65,21,563,3,94};
    int ar[] = {10,10,10,10,10,10,10};
    //cout<<secondMax2(ar,7);
    cout<<secondMax3(arr,7)<<endl;
    for(int i=0;i<7;i++)cout<<arr[i]<<" ";
}