#include<bits/stdc++.h>
using namespace std;
const int cha = 256;
bool checkAnagram(string &s, string &pat, int i){
    int count[cha] = {0};
    for(int j=0;j<pat.length();j++){
        count[pat[i]]++;
        count[s[i+j]]--;
    }
    for(int j=0;j<cha;j++){
        if(count[j]!=0){
            return false;
        }
    }
    return true;
}

bool anagramSearch(string &s, string &pat){
    int n = s.length();
    int m = pat.length();
    for(int i=0;i<=n-m;i++){
       if(checkAnagram(s,pat,i))return true;
    }
    return false;
}

int main(){
    string s = "rogu";
    string pat = "frog";
    cout<<checkAnagram(s,pat,0);
}