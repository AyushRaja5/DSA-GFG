#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool ischeck(string s, string pt){
    sort(s.begin(),s.end());
    sort(pt.begin(),pt.end());
    return s==pt;
    
}
bool perm(string s,string pt){
    string window="";
    for(int i=0;i<s.length();i++){
        window  = s.substr(i,pt.length());
        sort(window.begin(),window.end());
        if(ischeck(window,pt)){
            return 1;
        }
    }
    return 0;
}

int main(){
    string s = "abcdcd";
    string pt = "cdd";
    if(perm(s,pt))cout<<"yes";
    else cout<<"NO";
}