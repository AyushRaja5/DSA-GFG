#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<vector<int>>v;
    v.push_back({1,2,3,10,21});
    v.push_back({4,5,6,11,22});
    v.push_back({7,8,9,12,23});
    v.push_back({13,14,15,16,24});
    int top = 0;
    int left = v[0].size()-1;
    int x = 12;
    for(int i=top;i<v.size();i++){
        for(int j=top; j<=left;j++){
            if(v[i][j]==x) cout<<"Yes"<<endl<<i<<" "<<j;
            // else if(v[i][j]<x) top++;
            // else left--;
        }
    }
    return 0;
} // namespace std;
