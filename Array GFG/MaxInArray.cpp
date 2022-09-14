#include<iostream>
#include<climits>
using namespace std;

int max(int arr[],int n){       // Time = O(n^2)
    for(int i=0;i<n;i++){       // Space = O(1);
        bool flag =true;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[i]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            return i;
        }
    }
}
int max2(int arr[], int n){
    int m=INT_MIN;                  // Time = O(n)
    int res=0;                      // Space = O(1)
    for(int i=0;i<n;i++){
        if(arr[i]>m){
            m=arr[i];
            res=i;
        }
    }
    return res;
}
int max3(int arr[],int n, int max=0){     // Recursive Soln
   if((n-1)<0) return max;              // Time = O(1);
   else {                               // Space = O(n)
       if(arr[n-1]>max){
           max=arr[n-1];
       }
   }
   return max3(arr,n-1,max);
}
int main(){
    int n=6;
    int arr[n]={23,67,73,9,86,100};
    int ar[n]={10,10,10,10,10,10};
    cout<<max3(ar,n,0);
    return 0;
}