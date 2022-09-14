#include<iostream>
using namespace std;
int main(){
    int n=3,m=3;
    int v[n][m];
    int A[n][m] = {   {1,2,3},
                        {4,5,6},
                        {7,8,9},   };

    int b[n][m] = {   {1,2,3},
                        {4,5,6},
                        {7,8,9},   };

    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v[i][j] = A[i][j] + b[i][j];
            }
        }
    
    for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
