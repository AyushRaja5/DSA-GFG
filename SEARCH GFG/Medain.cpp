#include<iostream>
using namespace std;
int max(int a, int b){
    if(a>b) return a;
    else return b;
}
int min(int a, int b){
    if(a<b) return a;
    else return b;
}
double Median(int a[], int n, int b[], int m){
    int sa = 0;
    int ea = n-1;
    int total = (n+m);
    while(sa<=ea){
        int mid1 = (sa + ea)/2;
        int mid2 = (total+ 1)/2 - mid1;
        if((a[mid1-1] <= b[mid2]) && (b[mid2-1] <= a[mid1])){
            double medain= 0.0;
            if(total%2==0){
                int lmax = max(a[mid1-1],b[mid2-1]);
                int rmin = min(a[mid1],b[mid2]);
                return (lmax+rmin)/2.0;
            }
            else{
                int lmax = max(a[mid1-1],b[mid2-1]);
                return lmax;
            }
        }
        else if(a[mid1-1] > b[mid2]){
            ea = mid1-1;
        }
        else if(a[mid1] < b[mid2-1] ) sa = mid1+1;
    }
}

int main(){
    int a[] = {10,20,30,40,50};
    int n= 5;
    int b [] = {5,15,25,27,28,55,65,75,85};
    int m=9;

    //  5,10,15,20,25,27,28,30,40,50,55,65,75,85
    
    cout<<Median(a,n,b,m)<<endl;
} 