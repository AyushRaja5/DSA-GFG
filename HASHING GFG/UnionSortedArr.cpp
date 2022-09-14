#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int a[] = {15,15,15};
    int b[] = {18,12};
    unordered_set<int> sb(b,b+3);    
    for(int i=0;i<2;i++){
        sb.insert(b[i]);
    }
    
    cout<<"result is: "<<sb.size();
}