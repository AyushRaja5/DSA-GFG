#include<iostream>
#include<string>
using namespace std;
int main(){
    int c0=0;
    int c1=0;
    int res=0;
    string s = "0100110101";
    for(int i=0;i<11;i++){
        if(s[i]=='0') c0++;
        else c1++;
        if(c0==c1) res++;
    }
    if(c0!=c1) return -1;
    else cout<<res;
}
