#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    string s = "ayushraja";
    for(int i=0;i<s.length();i++){
        s[i] = s[i]-32;     // to UPPER CASE
    }
    cout<<"UPPER case string : "<<s<<endl;

    for(int i=0;i<s.length();i++){
        s[i] = s[i]+32;     // to LOWER CASE
    }
    cout<<"lower case string : "<<s<<endl;

    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<"UPPER case string using transformk: "<<s<<endl;

    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<"lower case string using transform: "<<s<<endl;
}