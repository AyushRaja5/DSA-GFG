// #include<iostream>
// #include<sstream>
// using namespace std;

// int main(){
//     int num;
//     string st = "123";
//     stringstream ss;
//     ss<<st;
//     string s;
//     ss>>num;
//     num *= 2;
//     cout<<num<<endl;
//     ss<<num;
//     ss>>s;
//     cout<<s;
// }


#include<bits/stdc++.h>
using namespace std;

int maxi(int arr[], int n){
    int m = INT_MIN;
    int res=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>m){
            m = arr[i];
            res = i; 
        }
    }
    return res;
}

int win(int n, int z,int pan[],int count){
    int maxind = maxi(pan,n);
    if(z<=0) return 0;
    else if(z<=pan[maxind]) return count++;
    else if(z>pan[maxind]){
     z = z-pan[maxind];  
     count++;
     pan[maxind] = pan[maxind]/2;
    }
    win(n,z,pan,count);
}
// 7 13 8 17 3
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,z;
        cin>>n>>z;
        int pan[z];
        for(int i=0;i<n;i++){
            cin>>pan[i];
        }
        cout<<win(n,z,pan,1);
    }
	return 0;
}
