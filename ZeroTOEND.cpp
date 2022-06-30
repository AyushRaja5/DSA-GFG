#include<iostream>
using namespace  std;
void remove(int arr[],int n){

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i;j<n;j++){
                if(arr[j]!=0){
                    int temp = arr[j];          // Time = O(0)
                    arr[j] = arr[i];            // Space = O(n^2)
                    arr[i] = temp;
                }
            }
        }
    } 
}
                                                //count     arr[i]!=0
void remove2(int arr[], int n){     // 10   9   3   0   0   12
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            int temp = arr[i];
            arr[i] = arr[count];            // Time = O(0)
            arr[count] = temp;   
            count++;
        }
    }
}
int main()
{
    int n=5;
    int arr[n] = {8,5,0,9,0};
    int arr1[7] = {1,2,0,0,0,3,6};
    int r[n] = {0,0,0,10,0};
    remove2(arr1,7);
    for(int i=0;i<7;i++)cout<<arr1[i]<<" ";
    cout<<endl;
    remove2(arr1,7);
    for(int i=0;i<n;i++)cout<<arr1[i]<<" ";
} 

