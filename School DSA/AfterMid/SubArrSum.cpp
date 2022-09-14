#include<iostream>
#include<math.h>
using namespace std;
int main(){
int arr[] = {1,2,3,-2,5};
int sum=arr[0];
int s=arr[0];
for(int i=0;i<6;i++){
  sum = max(arr[i], sum + arr[i]);
  s = max(s,sum);
}
cout<<s;
}