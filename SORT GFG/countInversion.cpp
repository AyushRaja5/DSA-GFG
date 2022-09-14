#include<iostream>
using namespace std;
int Inversion(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                count++;
            }
        }
    }
    return count;
}

int MergeForInversion(int arr[], int l, int mid, int r){
   int n1 = mid-l+1;
   int n2 = r-mid;
   int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i] = arr[i+l];
    for(int i=0;i<n2;i++)
        right[i] = arr[mid+1+i];
    int i=0,j=0,k=l,inv=0;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k++] = left[i++];
        }
        else{
            arr[k++] = right[j++];
            inv += n1-i;
        }
    }
    while(i<n1){
        arr[k++] = left[i++];
    }
    while(j<n2){
        arr[k++] = right[j++];
    }

    return inv;
}

int InversionMerge2(int arr[], int l, int r){
    int inv = 0;
    if(l<r){
        int mid = (l+r)/2;
        inv += InversionMerge2(arr,l,mid);
        inv += InversionMerge2(arr,mid+1,r);
        inv += MergeForInversion(arr,l,mid,r);
    }

    return inv;
}

int main(){
    int a[] = {2,4,1,3,5};
    int n=5;
    int b[] = {40,30,20,10};
    int m = 4;
    cout<<Inversion(a,n)<<endl;
    cout<<InversionMerge2(a,0,n-1);
    for(int x: a)
        cout<<"\t"<<x;
}