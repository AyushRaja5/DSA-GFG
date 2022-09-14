#include<iostream>
using namespace std;
// Create two variables, l and r, initialize l = 0 and r = n-1 and a variable ans = -1 
// to store the answer.
// Iterate the steps below till l <= r, the lower-bound is less than the upper-bound.
// Check if the element at middle index mid = (l+r)/2, is one or not.
// If the element is one, then check for the least index of 1 element 
// on the left side of the middle element, i.e. update r = mid – 1 and update ans = mid.
// If the element is zero, then check for the least index of 1 element on the right side 
// of the middle element, i.e. update l = mid + 1.
int main(){
    int arr[] = {1,4,20,3,10,5};
    int sum = 33;
    int n= 6;
   int l=0,r=n-1;
   int ans=-1;
   while(l<=r){
       int mid = (l+r)/2;
       if(arr[mid]==1){
           r = mid-1;
           ans = mid;
       }
       if(arr[mid]==0){
           l=mid+1;
       }
   }
}