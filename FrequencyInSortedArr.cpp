#include<iostream>
using namespace std;
void frequency(int arr[], int n){
    int count=1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
       if(arr[i]!=arr[i+1]){
           cout<<arr[i]<<"\t"<<count<<endl;
             count=1;
       }
    }
}
// void freq(int arr[],int n){
//     for(int i=0,j=0;i<n;i++){
//         int res = arr[i];
        
//         while(j<n){
//             if(arr[j]==res){
//                 count++;
//             }
//             j++;
//         }
//     }
// }
int main(){
    int n = 8;
    int arr[n] = {10,10,10, 23,23,44,44,66,67};
    int a[] = {12,10,12,12,10,54,12,54};
    frequency(arr,n+1);
    // frequency(a,n+1);
}