#include<iostream>
using namespace  std;

int main(){
    int a[2][2],b[2][2],c[2][2];
     cout<<"Enter for A: ";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter for B: ";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>b[i][j];
        }
    }
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){ 
            c[i][j]=0;
            for(int k=0;k<j;k++){
                c[i][j] = c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    cout<<"Answer is : ";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<c[i][j]<<'\t';
        }
    }
    return 0;
}