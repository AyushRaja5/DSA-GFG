#include<iostream>
using namespace std;
bool prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
bool prime2(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
bool prime3(int n){
    for(int i=2;i*i<n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
// bool prime4(int n){
//     if(n==2 || n==3) return 1;
//     for(int i =1;i<n;i++){
//         if(n%(6*i+1)==0 || n%(6*i-1)==0) return 0;
//     }
//     return 1;
// }
int main()
{
    int n = 13;
    cout<<"Ans : "<<prime3(13)<<endl;
    cout<<"Ans : "<<prime3(15)<<endl;
    cout<<"Ans : "<<prime3(23)<<endl;
} // namespace std;


