#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v;
    v.push_back({1,2,3,10,21});
    v.push_back({4,5,6,11,22});
    v.push_back({7,8,9,12,23});
    v.push_back({13,14,15,16,2});
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"\n\n After Spiral\n";
    int top=0,left=0;
    int bottom = v.size()-1,right = v[0].size()-1;

    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<v[top][i]<<" ";
        }top++;
        for(int j = top;j<=bottom;j++){
            cout<<v[j][right]<<" ";
        }right--;
        for(int k=right;k>=left;k--){
            cout<<v[bottom][k]<<" ";
        }bottom--;
        for(int l=bottom;l>=top;l--){
            cout<<v[l][left]<<" ";
        }left++;
    }
}
