#include<iostream>
using namespace std;
bool SumOfTwo(int arr[], int n, int X){
    int s=0;
    int e = n-1;
    while (s<e){
        if((arr[s]+arr[e])==X) return 1;
        else if((arr[s] + arr[e]) > X) e--;
        else s++;
    }
    return 0;
}

bool SumOfThree(int arr[], int n, int X){
    for(int i=0;i<n;i++){
        int s = i+1;
        int e = n-1;
        int ans = arr[i];
        while(s<e){
            if((arr[s] + arr[e]) == (X-ans)) return 1;
            else if((arr[s] + arr[e]) > (X-ans)) e--;
            else s++;
        }
    }
    return 0;
}

bool Pythagorous(int arr[], int n){
    for(int i=0;i<n;i++){
        int ans = arr[i];
        int s = i+1;
        int e = n-1;
        while(s<e){
            if(((arr[s]*arr[s]) + (arr[e]*arr[e])) == (X - (ans*ans))) return true;
            else if(((arr[s]*arr[s]) + (arr[e]*arr[e])) > (X-(ans*ans))) e--;
            else s++;
        }
    }
    return false;
}

int main(){
    int arr[7] = {1,3,6,8,9,10,17};
    // cout<<SumOfTwo(arr,7,44);
    // cout<<SumOfThree(arr,7,140);
    
    cout<<Pythagorous(arr,7);
}