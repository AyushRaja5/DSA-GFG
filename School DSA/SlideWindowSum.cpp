#include<iostream>
using namespace std;
int xyz(int arr[],int n, int l,int r){
    int count=0;
    for(int i=0;i<n;i++){
        int  sum=0;
        for(int j=i;j<n;j++){
            while(sum<l){
                sum+=arr[i];
            }
            if(sum>l && sum<r){
                count++;
            }
        }
    }
    cout<<count;
}
int main(){
    int n = 4;
    int arr[n] = {2,3,5,8};
    int l=4; int r=13;
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>l && sum<r){
            count++;
            sum=0;
        }
    }
    xyz(arr,n,l,r);
}