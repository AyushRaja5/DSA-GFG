#include<iostream>
using namespace std;

void abcd(int n){
    char c = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<c<<" ";
        }cout<<endl;
        c++;
    }
}

void abcd2(int n){
    for(int i=0;i<n;i++){
         char c = 'A';
        for(int j=0;j<n;j++){
            cout<<c<<" ";
            c++;
        }cout<<endl;
    }
}

void abcdCount(int n){
    char c = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<c<<" ";
            c++;
        }cout<<endl;  
    }
}

void abcd3(int n){
    //char i = 'A';
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<char(i+j+'A'-1)<<" ";
        }cout<<endl;
    }
}

void abcd4(int n){
    char c = 'A';
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<c<<" ";
        }cout<<endl;  
        c++;
    }
}

void abcd5(int n){
    char c = 'A';
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<c<<" ";
             c++;
        }cout<<endl;  
    }
}

void abc6(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<char(n-i+j+65)<<" ";
        }cout<<endl;  
    }
}
int main(){
    abc6(4);
}