#include<bits/stdc++.h>
using namespace std;

void search(string s, string pat){
    int patsize = 6;
    for(int i=0;i<s.length()-pat.length()+1;i++){
        int j = i;
        string word="";
        int sum =0;
        while(j<pat.length()+i){
            sum = sum + (s[j]-'a')+1;
            word = word + s[j];
            j++;
        }
        cout<<word<<" : "<<sum<<endl;
        if(sum==patsize){
            bool flag =true;
            for(int k=0;k<pat.length();k++){
                if(s[i+k]!=pat[k]){
                    flag = false;
                    break;
                }
            }
        if(flag)cout<<"Answer is : "<<i<<endl;
        }
    }
}


void searcRabinKarp(string s,string pat,int n,int m){
    int d = m-1;
    int sumpat=0;
    for(int i=1;i<=m;i++){
        sumpat = sumpat + (s[i-1]-'a')*pow(i,d);
        d--;
    }
    int sumstr =0;
    for(int i=0;i<n;i++){
        if(sumpat==sumstr){
            bool flag = true;
            for(int j=0;j<m;j++){
                if(s[j]!=pat[j]){
                    flag = false;
                    break;
                }
            }
            if(flag)cout<<"Answer is : "<<i<<endl;
        }
        sumstr = d*(sumstr - (s[i]-'a')*pow(d,m-1)) +s[i+m];
    }

}

int main(){
    string s = "abdabcbabc";
    string pat = "abc";
    search(s,pat);
}