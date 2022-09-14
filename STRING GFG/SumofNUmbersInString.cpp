#include<bits/stdc++.h>
using namespace std;

int sum(string &s){
    // int s = 0;
    vector<int> v;
    for(int i=0;i<s.length();i++){
        int num=0;
        if(isdigit(s[i])){
            int j=i;
            while(isdigit(s[j]) && j<s.length()){
                num = num*10 + s[j]-'0';
                j++;
            }
            i = j;
        }
        v.push_back(num);
    }
    int res=0;
    for( int x : v){
        cout<<x<<" ";
        res += x;
    }
    return res;

}

int main(){
    string s = "1abc23aa3rw2t";
    cout<<endl<<sum(s);
}