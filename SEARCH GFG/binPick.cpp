#include<iostream>
using namespace std;
int nextFit(int weight[],int n,int c)
{
int res=0;
int bin_rem=c;
for(int i=0;i<n;i++){
    if(weight[i]>bin_rem){
        res++;
        bin_rem=c-weight[i];
    }
    else
        bin_rem=bin_rem-weight[i];
    }
    return res;
}
main()
{
int weight[]={2,5,4,7,1,3,8};
int c=10;
int n=sizeof(weight)/sizeof(weight[0]);
cout<<"Number of bins required in next fit"<<nextFit(weight,n,c);
}
int main(){
    int ar[] = {2,5,4,7,1,3,8};
    int arr[] = {9,8,2,2,5,4};
    int n=6;
    int noOfBins=1;
    int max=0;
    int cap=10;
    for(int i=0;i<n;i++){
        if((max + arr[i])<=cap){
        max = max + arr[i];
        }
        else if((max + arr[i])>cap){
            max=arr[i];
        }
    }
    cout<<noOfBins;
}