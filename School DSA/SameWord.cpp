#include<iostream>
using namespace std;

void Word(){
    string s1 = "evil";
    string s2 = "live";
    int l1 = s1.length();
    for(int i=0;i<l1;i++){
        for(int j=0;j<l1-1;j++){
            if (s1[j] > s1[j + 1]){
                char  temp = s1[j];
                s1[j] = s1[j + 1];
                s1[j + 1] = temp;
            }
        }
    }

    int l2 = s2.length();
    for(int i=0;i<l2;i++){
        for(int j=0;j<l2-1;j++){
            if (s2[j] > s2[j + 1]){
                char  temp = s2[j];
                s2[j] = s2[j + 1];
                s2[j + 1] = temp;
            }
        }
    }

    if(s1==s2) cout<<"Same";
    else cout<<"Different";
}
int main(){
    Word();
     return 0;
}