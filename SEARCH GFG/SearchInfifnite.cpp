#include<iostream>
using namespace std;
    int SearchInInfinite(int arr[],int X){
        int i=0;
        while(true){
            if(arr[i]==X) return i;
            if(arr[i]>X) return -1;
        }
    }
int Binary(int arr[], int X, int s,int e){
    while(s<=e){
        int mid= (s+e)/2;
        if(arr[mid]>X) e =mid-1;
        else if(arr[mid]<X) s = mid+1;
        else return mid;
        return -1;
    }
}
int SearchiNINfinite(int arr[], int X){
    if(arr[0]==X) return 0;
    int i =1;
    while(arr[i]<X){
        i = i*2;
    }
    if(arr[i]==X) return i;
    Binary(arr,X,i/2, i-1);
}
int main(){
    int arr[] = {3,12,43,54,66,99,100,132,341,364};
    cout<<Binary(arr,66,0,9)<<endl;
    cout<<SearchInInfinite(arr,66);
}