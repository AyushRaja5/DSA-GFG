#include<iostream>
using namespace std;
void leader(int arr[], int n){
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                flag =false;
                break;
            }
        }
        if(flag==true) cout<<arr[i]<<"  ";
    }
}
int main(){
    int n = 7;
    int arr[n] = {7,10,4,10,6,5,2};
    int ar[3] = {10,20,30};
    leader(arr,n); 
        //for(int i=0;i<n;i++)cout<<arr[i]<<" ";
 }