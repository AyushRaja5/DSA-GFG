#include<iostream>
using namespace std;
#include<climits>

int Repeat1(int a[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]) return a[i];
        }
    }
    return -1;
}

int Repeat2(int a[], int n){

    bool validate[] = {0,0,0,0,0,0,0};
        for(int i = 0;i<n;i++){
        if(validate[a[i]]){
            return a[i];
        }
        validate[a[i]]=1;
    }
}

int Repeat3(int arr[], int n){

    // Sort the array arr[] first.
    
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]) return arr[i];
    }
    return -1;
}

int repeat4(int arr[], int n){
    int slow = arr[0];
    int fast = arr[0];

    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow!=fast);

    slow = arr[0];

    while(slow!=fast){
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main(){
    int a[] = {1,2,3,0,3,4,5}; //3
            // 0,1,2,3,4,5,6

    int b[] = {0,2,1,3,2,2};  //2

    int arr[] = {1, 3, 2, 4, 6, 5, 7, 3}, n= 8;

    cout<<repeat4(b,6);
}