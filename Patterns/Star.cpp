#include<iostream>
using namespace std;

void right(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }cout<<endl;
    }
}

void right1234(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<i<<" ";
        }cout<<endl;
    }
}

void right1234Count(int n){
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
void right1234Sum(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<i+j<<" ";
        }cout<<endl;
    }
}

void right111(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }cout<<endl;
    }
}
 int main(){
     right111(5);
 }