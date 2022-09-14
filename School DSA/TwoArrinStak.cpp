#include <iostream>
using  namespace std;
#define n 100
class stack{
        int *arr;
        int top1,top2;
    public: 
        stack(){
            arr = new int [n];
            top1 = -1;
            top2 = n;
        }
    
    void push1(int val){
            if(top1>=n/2){
        cout<<"OverFlow Stack from PUSH";
        return;
    }
    top1 = top1+1;
    arr[top1] = val;
    cout<<"Entering "<<arr[top1]<<" in stack\n";
    }
    void push2(int val){
            if(top2>=n/2){
        cout<<"OverFlow Stack from PUSH";
        return;
    }
    top2 = top2-1;
    arr[top2] = val;
    cout<<"Entering "<<arr[top2]<<" in stack\n";
    }
    int peek1();
    int peek2();
    void pop1();
    void pop2();
};
int stack::peek1(){
    if(top1==-1) return -1;
    return arr[top1];
}
int stack::peek2(){
    if(top1==n) return -1;
    return arr[top2];
}
void stack::pop1(){
    cout<<"Eliminating "<<arr[top1]<<" from stack\n";
    top1=top1-1;
    if(top1==-1){
        cout<<"UNder FLow Stack";
        return;
    }
} 
void stack::pop2(){
    cout<<"Eliminating "<<arr[top2]<<" from stack\n";
    top2=top2+1;
    if(top2==n){
        cout<<"UNder FLow Stack";
        return;
    }
} 
int main(){
    stack st;
    st.push1(2);
    st.push1(3);
    st.push1(4);
    st.push1(5);
    cout<<st.peek1()<<endl;
    st.pop1();
    cout<<st.peek1()<<endl;
    st.pop1();
    cout<<st.peek1()<<endl;
}