#include<iostream>
using namespace std;
int check(int L, int R)
{
    int flag;
	int count = 0;
    for (int i = L; i <= R; i++) {
        if (i == 1 || i == 0)
            continue;
        flag = 1;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            count++;
    }
	return count;
}
int main(){
	int t;
	while(t--){
		int l,r;
		cin>>l>>r;
		cout<<abs(l - r + check(l,r) + 1)<<endl;
	}
	// return 1;
}