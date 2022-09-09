
#include <bits/stdc++.h>
using namespace std;
vector<int> answer(int mot[], int k, int sat[], int sk, int queri[], int q){
    vector<int>ans;
    for(int i=0;i<k;i++){
        for(int j=0;j<sk;j++){
            ans.push_back(mot[i]+sat[j]);
        }
    }
    sort(ans.begin(),ans.end());
    reverse(ans.begin(),ans.end());
    return ans;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int k,q;
        cout<<"ENter K and Q";
	    cin>>k>>q;
	    int mot[k];
        cout<<"Enter motivation :";
	    for(int i=0;i<k;i++){
	        cin>>mot[i];
	    }
	    int sat[k];
        cout<<"Enter sat :";
	    for(int i=0;i<k;i++){
	        cin>>sat[i];
	    }
	    int queri[q];
        cout<<"Enter Queri :";
	    for(int i=0;i<q;i++){
	        cin>>queri[i];
	    }
	    vector<int> v = answer(mot, k, sat, k, queri, q);
	    for(int i=0;i<q;i++){
	        cout<<v[queri[i]-1]<<" ";
	    }
	}
	return 0;
}
