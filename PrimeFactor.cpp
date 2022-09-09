#include<iostream>
using namespace std;
bool prime(int n){
    if(n==0 || n==1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
void factorization(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(prime(i))cout<<i<<" ";
            if(prime(n/i)) cout<<n/i<<" ";
        }
    }
}
int main(){
    factorization(108);
}