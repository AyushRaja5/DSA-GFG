#include<iostream>
using namespace std;

void leftrotate(string &s){
    char ch = s[0];
    for(int i=1;i<s.length();i++){
        s[i-1]=s[i];
    }
    s[s.length()-1] = ch;
}
bool checkRotation1(string s1, string s2){
    if(s1.length()!=s2.length()) return false;
    int ind =-1;
    for(int i =0;i<s2.length();i++){
        if(s2[i]==s1[0]){
            ind = i;
            break;
        }
    }
    while(ind-->0){
        leftrotate(s2);
    }
    return s1==s2;
}

bool checkRotation2(string s1,string s2){
    if(s1.length()!=s2.length())return false;
    // return ((s1+s1).find(s2)!=string::npos);

        //  OR 
        
    string word = (s1+s1);
    return (word.find(s2)!=4294967295);
}

int main(){
    string s1 = "ABCD", s2 = "CDAB"; //Yes     ABCDABCD
    cout<<checkRotation2(s1,s2)<<endl;
    string s3 = "ABAB", s4 = "BBAA"; //NO   ABABABAB
    cout<<checkRotation2(s3,s4)<<endl;
}