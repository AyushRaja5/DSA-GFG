#include<iostream>
using namespace std;

int main(){
    int n=3,m=3;
    int v[n][m];
    int a[n][m] = {   {1,2,3},
                        {4,5,6},
                        {7,8,9},   };

    int b[n][m] = {   {1,2,3},
                        {4,5,6},
                        {7,8,9},   };
    int row1=3,col1=3;
    int row2=3,col2=3;
    int ans[row1][col2];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            for(int k=0;k<row2;k++){
                ans[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i,n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }

}