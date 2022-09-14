#include<iostream>
#include<string>
using namespace std;
int countword(string s){
    int count=0;
    int j=0;
    for(int i=0;i<s.length();){
        string word = "";
        j= i;
        while(j<s.length()){
            if(s[j]==' ')break;
            word += s[j];
            j++;
        }
        count++;
        i = j+1;
    }
    return count;
}

bool check(string s){
    int k =0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9')return 0;
    }
    return 1;
}
int countwithoutNUmber(string s){
    int n = s.length();
    int count=0;
    int i=0;
    while(i<n){
        int j = i;
        string word = "";
        while(j<n){
            if(s[j]==' ')break;
            word = word + s[j];
            j++;
        }
        if(check(word)){
            count++;
        }
        i = j+1;
    }
    return count;
}

int main(){
    string s = "Ayush ra21 -@jw8 hif23k oq.jqo ef2w";
    string s1="99";
    cout<<countwithoutNUmber(s)<<endl;
}