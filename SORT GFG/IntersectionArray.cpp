#include<iostream>
#include<set>
using namespace std;
bool find(int arr[], int n, int k){
    int l=0;
    int r = n-1;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(arr[mid]==k) return true;
        else if(arr[mid]<k){
            l=mid+1;
        }
        else if(arr[mid]>k){
            r=mid-1;
        }
    }
    return false;
}
void Innsertion(int a[], int n, int b[], int m){
    int i = 0;
    int j=0;
    set<int> v;
    for(int i=0;i<n;i++){
        if(find(b,m,a[i])){
            v.insert(a[i]);
        }
    }
    for(int x:v){
        cout<<x<<"\t";
    }
}

void Insertion2(int a[], int n, int b[], int m){
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(a[i]==a[i-1] && i>0){
            i++;
            continue;
        }
        if(a[i]<b[j])
            i++;
        if(a[i]>b[j])
            j++;
        if(a[i]==b[j])
            {
                cout<<a[i]<<"\t";
                i++;
                j++;
            }
    }
    cout<<"\nnikal lawde";
}
int main(){
    int a[] = {3,5,10,10,15,15,20};
    int n = 7;

    int b[] = {5,10,10,15,30};
    int m = 5;

    Insertion2(a,n,b,m);
}