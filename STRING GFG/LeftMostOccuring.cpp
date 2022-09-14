#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int leftmostOccuring1(string s){
    int res=-1;
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j])return i;
        }
    }
    return res;
}

int leftmostOccuring2(string s){
    vector<int>fr(26,0);

    for(int i=0;i<s.length();i++)fr[s[i]-'a']++;
    for(int x : fr)cout<<x;
    cout<<endl;
    for(int i=0;i<s.length();i++)if(fr[s[i]-'a']>1)return i;
    return -1;
}

int main(){
    string s = "abbcc";
    string s1 = "geeksforgeeks";
    string s2 = "avcd";
    cout<<leftmostOccuring1(s1)<<endl;
    cout<<leftmostOccuring2(s)<<endl;
    // cout<<'g'-'a';
}
