#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
	if(n<=1) return 0;
	for(int i =2; i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int countPrime(int n){
	int count=0;
	for(int i=1;i<=n;i++){
		if(prime(i)){
			cout<<" Kitne Prime hai : "<<i<<endl;
			count++;
		}
	}
	return count;
}
int check(int l=3, int r=10){
	int result=0;
	for(int x = l;x<=r ;x++){
		// if(count(x)){
		// 	cout<<"Check for prime : "<<x<<endl;
		// 	int x = countPrime(i);
		// 	cout<<"count from 1 to "<<i<<" : "<<x<<endl;
		// 	if(prime(x)){
		// 		result++;
		// 		cout<<endl<<"Res : "<<result<<endl;
		// 	}
		// }
		int numofprime = countPrime(x);
		if(prime(numofprime)){
			result++;
		}
	}
	return result;
}
int main(){
	// int t ;
	// cin>>t;
	// while(t--){
		int l,r;
		cin>>l>>r;
		cout<<check(l,r)<<endl;
	// }

	// cout<<"---------------------";
	// cout<<prime(7)<<endl;
	// cout<<countPrime(10);
}