#include <iostream>
using namespace std;
#define n 200
class stack{
    int * arr;
    int top;
    public: 
        stack(){
            arr = new int [n];
            top = -1;
        }
    void push(int val){
        if(top>=n-1){
             cout<<"Overloading\t";
             return;
        }
         top = top+1;
        arr[top] = val;
        cout<<"Entering "<<arr[top]<<" in stack\n";
    }
    void pop(){
        cout<<"Eliminating "<<arr[top]<<" from stack\n";
        top=top-1;
        if(top==-1){
        cout<<"UNder FLow Stack";
        return;
        }
    }
    int peek();
};
int stack::peek(){
    if(top==-1) return -1;
    return arr[top];
}
int main(){
     stack st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    return 0;
}