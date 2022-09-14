#include<iostream>
using namespace std;
int root(int x){
    int i=1;
    while(i*i<=x){
        i++;
    }
    return i-1;
}

int root3(int n){
    int s=1;
    int e = n;
    int res=-1;
    while (s<=e){
        int mid = (s+e)/2;
        int msq = mid*mid;
        if(msq==n) return mid;
        else if(msq > n) e = mid-1;
        else{
            s = mid+1;
            res=mid;
        }
    }
    return res;    
}

int main(){
    cout<<root3(23);
}