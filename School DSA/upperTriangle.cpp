#include<iostream>
using namespace  std;
void show()
{
int a[2][3] = {1, 2, 3, 4, 5};
int i = 0, j = 0;
for (i = 0; i < 2; i++)
for (j = 0; j < 3; j++)
cout<<a[i][j]<<'\t';
}
int main(){
    int a[3][3];
     cout<<"Enter for A: ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j>=i){
                cout<<a[i][j]<<'\t';
            }
        }
        cout<<endl;
    }
    show();
}