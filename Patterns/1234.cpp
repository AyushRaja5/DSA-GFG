#include<iostream>
using namespace std;
void p1234(){
    for(int i=0;i<5;i++){
        for(int j=1;j<=5;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void p4321(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>=1;j--){
            cout<<j<<" ";
        }cout<<endl;
    }
}

void count1234(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<(3*i)+j<<" ";
        }
        cout<<endl;
    }
}
int main(){

    count1234(3);
    return 0;
}