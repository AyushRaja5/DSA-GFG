#include<iostream>
using namespace std;
void rearrange(int arr[], int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
             temp=arr[j];
             arr[j]=arr[i];
             arr[i]=temp;
            }
        }
    }
    
}
int main(){
    int arr[] = {1,3,2,2,5}; //1 2 2 3 5
    rearrange(arr,5);
}


