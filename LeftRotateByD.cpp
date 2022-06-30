#include<iostream>
using namespace std;
void rotate(int arr[], int n,int d){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]  = arr[i];                   // Time = O(d + n-d + d) = O(n+d) = O(n)
    }                                            // Space = O(d) ---> temp[d]
    for(int i=n-d;i<n;i++){
        arr[i] = temp[i-n+d];
    }
}

//------------------------------*****************************---------------------------

void rotateByOne(int arr[], int n){
   int temp = arr[0];
   for(int i=0;i<n;i++){
       arr[i] = arr[i+1];                       // Time = O(d*n)
   }                                            // Space = O(1)
   arr[n-1] = temp;
}
void rotate1(int arr[], int n, int d){
    for(int i=0;i<d;i++){
        rotateByOne(arr,n);
    }
}

//------------------------------*****************************---------------------------
void reverse(int arr[],int l,int h){
    while(l<h){
        int temp=arr[l];
        arr[l] = arr[h];
        arr[h] = temp;
        l++;
        h--;
    }
}
void rotate2(int arr[], int n, int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
//---------------------------*****************************----------------------------

int main(){
    int n = 10;
    int arr[n] = {1,2,3,4,5,6,7,8,9,0}; 
    rotate1(arr,n,4);
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}