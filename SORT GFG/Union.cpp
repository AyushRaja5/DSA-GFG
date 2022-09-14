#include<iostream>
using namespace std;
void Union(int a[], int n, int b[], int m){
    int i=0;
    int j=0;
     while(i<n && j<m){
         if(a[i]==a[i-1] && i>0){
            i++;
            continue;
         }
        else if(b[j]==b[j-1] && j>0){
             j++;
             continue;
         }
        else if(a[i]==b[j]){
             cout<<a[i]<<'\t';
            i++;
            j++;
         }
        else if(a[i]<=b[j]){
             cout<<a[i]<<"\t";
             i++;
         }
        else if(a[i]>b[j]){
             cout<<b[j]<<'\t';
             j++;
         }
     }
    
    while (i<n)
         {
             cout<<a[i]<<'\t';
             i++;
         }
    
    while (j<m)
         {
             cout<<b[j]<<'\t';
             j++;
         }

}
int main(){
    int a[] = {3,5,10,10,15,15,20};
    int n = 7;

    int b[] = {5,10,10,15,15,30};
    int m = 6;

    Union(a,n,b,m);

}