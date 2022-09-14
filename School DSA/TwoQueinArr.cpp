#include <iostream>
using  namespace std;
#define n 100
class queue{
        int *arr;
        int top1,top2;
    public: 
        queue(){
            arr = new int [n];
            top1 = -1;
            top2 = (n/2)+1;
        }
    
    void push1(int val){
            if(top1>=n/2){
        cout<<"OverFlow queue from PUSH";
        return;
    }
    top1 = top1+1;
    arr[top1] = val;
    cout<<"Entering "<<arr[top1]<<" in queue\n";
    }
    void push2(int val){
            if(top2>=n){
        cout<<"OverFlow queue from PUSH";
        return;
    }
    top2 = top2+1;
    arr[top2] = val;
    cout<<"Entering "<<arr[top2]<<" in queue\n";
    }
    int peek1();
    int peek2();
    void pop1();
    void pop2();
};
int queue::peek1(){
    if(top1==-1) return -1;
    return arr[top1];
}
int queue::peek2(){
    if(top1==n) return -1;
    return arr[top2];
}
void queue::pop1(){
    cout<<"Eliminating "<<arr[0]<<" from queue\n";
    top1=top1-1;
    if(top1==-1){
        cout<<"UNder FLow queue";
        return;
    }
} 
void queue::pop2(){
    cout<<"Eliminating "<<arr[(n/2)+1]<<" from queue\n";
    top2=top2-1;
    if(top2==n/2){
        cout<<"UNder FLow queue";
        return;
    }
} 
int main(){
    queue st;
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