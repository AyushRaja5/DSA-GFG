#include<bits/stdc++.h>
using namespace std;

string keypad(string s){
    string check = "22233344455566677778889999";
    string res = "";
    for(int i=0;i<s.length();i++){
        res = res + check[s[i]-'a'];
    }
    return res;
}

int main(){
    string s = "geeksforgeeks";
    cout<<keypad(s);
}