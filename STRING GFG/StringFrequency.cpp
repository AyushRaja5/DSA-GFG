#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
void countfrequence1(string str){
    vector<int> frequency(26,0);
    for( int i=0;i<str.length();i++){
        frequency[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(frequency[i]>0){
            cout<<(char)(i + 'a')<<"\t"<<frequency[i]<<endl;
        }
    }
}
void countfrequency2(string str){
    map<char, int> mp;
    for(int i =0;i<str.length();i++){
        mp[str[i]]++;
    }
    for(auto x : mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
}
int main(){
    string str = "ayushraja";
    countfrequency2(str);
}