#include<bits/stdc++.h>
using namespace std;

void patternSearch1(string s, string pat){
    int n =s.length();
    for(int i=0;i<n;i++){
        string window = s.substr(i,pat.length());
        if(window==pat)cout<<i<<"\t"; 
    }
    return;
}

void patternSearch2(string s, string pat){
    int m = pat.length();
    int n = s.length();
    for(int i=0;i<=(n-m);i++){
        int j;
        for(j=0;j<m;j++)
            if(pat[j]!=s[i+j])
                break;
        if(j==m)cout<<i<<"\t";
    }
}




void patternSearch3(string s, string pat){
    int m = pat.length();
    int n = s.length();
    for(int i=0;i<=(n-m);){ 
        int j;
        for(j=0;j<m;j++)
            if(pat[j]!=s[i+j])
                break;
        if(j==m)cout<<i<<"\t";
        if(j==0) i++;
        else i = i+j;
    }
}

int main(){
    string s = "abcrfbcodadobc";
    string pat = "bc";
    patternSearch3(s,pat);
}