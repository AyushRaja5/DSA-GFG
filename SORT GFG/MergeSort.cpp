#include<iostream>
#include<algorithm>
using namespace std;
    void MergeSort1(int a[], int n, int b[], int m){
        int  ans[m+n];
        for(int i=0;i<n;i++){
            ans[i] = a[i];
        }
        for(int i=0;i<m;i++){
            ans[i+n] = b[i];
        }
        sort(ans,ans+n+m);
        cout<<"Merge Sort1\n";
        for(int x:ans){
            cout<<x<<" ";
        }
    }
void MergeSort2(int a[],int n, int b[], int m){
    //      Array A & B dono SOrted hona chaiye
    sort(a,a+n);
    sort(b,b+m);
    int i=0;
    int j=0;
    int ans[n+m];
    int x=0;
    while(i<n && j<m){
        if(a[i]>=b[j]){
            ans[x] = b[j];
            j++;
        }
        else {
            ans[x] = a[i];
            i++;
        }
        x++;
    }
    cout<<"Merger Sort 2\n";
    for(int x:ans){
            cout<<x<<" ";
        }
}

void MergeArray(int arr[], int l,int mid, int r){
    int ans[r-l+1];
    int x=0;
    int i=l;
    int j= mid+1;
    while(i<=mid && j<=r){
        if(arr[i]<=arr[j]){
            ans[x] = arr[i];
            i++;
        }
        else if(arr[j]<arr[i]){
            ans[x] = arr[j];
            j++;
        }
        x++;
    }

    while(i<=mid){
        ans[x]=arr[i];
        i++;
        x++;
    }
    while(j<=r){
        ans[x]=arr[j];
        j++;
        x++;
    }

    for(int ind=0,in=l;ind<r-l+1;ind++,in++){
        arr[in] = ans[ind];
    }
}

void MergeSort3(int arr[], int l,int r){
    if(l>=r) return;
    int mid = l + (r-l)/2;
    MergeSort3(arr,l,mid);
    MergeSort3(arr,mid+1,r);
    MergeArray(arr,l,mid,r);
}

int main(){
    int a[] = {21,3,67,2,17,34};
    int n = 6;

    int b[] = {5,1,7,36,17,23};
    int m = 6;
    
    // MergeSort1(a,n,b,m);
     cout<<endl;
    MergeSort3(a,0,n-1);
    cout<<"Merge Sort 3\n";
    for(int x : a)cout<<x<<" ";
}