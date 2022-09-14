#include<iostream>
using namespace std;
// 1.Traverse the array from start to end.
// 2.From every index start another loop from i to the end of array to get all subarray starting from i, keep a variable sum to calculate the sum.
// 3.For every index in inner loop update sum = sum + array[j]
// I4.f the sum is equal to the given sum then print the subarray.
void subArraySum(int arr[],int n, int sum){
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s = s+ arr[i];
        }
        if(sum==s){
            for(int j=i;j<n;j++){
                cout<<arr[i]<<'\t';
            }
        }
    }
}
int main(){
    int arr[] = {1,4,20,3,10,5};
    int sum = 33;
    int n= 6;
    cout<<subArraySum1(arr, n, sum);
}

int subArraySum1(int arr[], int n, int sum)
{
int curr_sum, i, j;
for (i = 0; i < n; i++) {
curr_sum = arr[i];
for (j = i + 1; j <= n; j++) {
if (curr_sum == sum) {
cout << "Sum found between indexes "
<< i << " and " << j - 1;
return 1;
}
if (curr_sum > sum || j == n)
break;
curr_sum = curr_sum + arr[j];
}
}

cout << "No subarray found";

}