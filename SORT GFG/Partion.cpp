#include<iostream>
using namespace std;

int NaivePartion(int arr[], int n, int x){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=arr[x] && i!=x){
            count++;
        }
    }
    return count;
}

int Partition(int arr[], int l, int h, int p){
    int temp[h-l+1];
    int ind=0;
    for(int i=l;i<h;i++){
        if(arr[i]<arr[p]){
             temp[ind] = arr[i]; 
             ind++;
        }
    }
    for(int i=l;i<h;i++){
        if(arr[i]==arr[p]){
                temp[ind] = arr[i]; 
                ind++;
        }
    }
    int res = l + ind-1;
    for(int i=l;i<h;i++){
        if(arr[i]>arr[p]){
            temp[ind] = arr[i];
            ind++;
        }
    }

    for(int i=l;i<h;i++){
        arr[i] = temp[i-l];
    }
    return res;
}



int main(){
    int a[] = {3,7,6,12,10,7};
    int n=6;
    cout<<Partition(a,0,n-1,1);
    for(int x:a)cout<<x<<"\t";
}