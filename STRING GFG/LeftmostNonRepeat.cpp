#include<bits/stdc++.h>
using namespace std;
int leftmostOccuring1(string s){
    for(int i=0;i<s.length();i++){
        bool flag = false;
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]) flag = true;
        }
        if(flag==false) return i;
    }
    return -1;
}

int leftmostOccuring2(string s){

    vector<int> v(26,0);
    for(int i=0;i<s.length();i++)v[s[i]-'a']++;
    for(int i=0;i<s.length();i++)if(v[s[i]-'a']==1)return i;
    for(int x:v)cout<<x;
    cout<<endl;
    return -1;
}

int main(){
    string s = "abbcc";
    string s1 = "geeksforgeeks";
    string s2 = "avcd";
    cout<<leftmostOccuring1(s1)<<endl;
    cout<<leftmostOccuring2(s1)<<endl;
}