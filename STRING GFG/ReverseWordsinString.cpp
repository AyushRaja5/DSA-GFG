#include<bits/stdc++.h>
using namespace std;

string reverseWords(string &s){
    string res="";
    vector<string> v;
    for(int i=0;i<s.length();i++){
        int j=i;
        string word="";
        while(s[j]!=' ' && j<s.length()){
            word += s[j];
            j++;
        }
        i = j;
        v.push_back(word);
    }
    while(s.length()>0){
        s.pop_back();
    }
    for(int i=0;i<v.size();i++){
        s += v[v.size()-i-1];
        s += ' ';
    }
    // return s;
}
string reverse(int start, int end,string &word){
    while(start<=end){
        swap(word[start],word[end]);
        start++;
        end--;
    }
    return word;
}
string reverseWords2(string s){
    int j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            reverse(j,i-1,s);
            j = i+1;
        }
    }
    reverse(j,s.length()-1,s);
    string res = reverse(0,s.length()-1,s);
    return res;
}

int main(){
    string s = "welcome to gfg";
    string res = reverseWords2(s);
    cout<<res<<endl;

}