#include<iostream>
#include<algorithm>
using namespace std;
bool palindrome(string str){
    string s2 = str;
    int l=0,h = s2.length()-1;
    while(l<h){
        char c = s2[l];
        s2[l] = s2[h];
        s2[h] = c;
        l++;
        h--;
    }
    return s2==str;
}

bool palindrome2(string str){
    string s2=str;
    reverse(s2.begin(),s2.end());
    return s2==str;
}

bool palindrome3(string &str){  // pass by reference 
    int l=0,h=str.length()-1;   // if dont do pass by ref
    while(l<h){                 // s is copying to str
        if(str[l]!=str[h]) return false;
        l++;
        h--;
    }
    return true;
}

int main(){
    string s = "AABAA";
    cout<<palindrome3(s);
 }