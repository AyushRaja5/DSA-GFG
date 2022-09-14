#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int val){
            data = val;
            next= NULL;
        }
};
void push(node* &head,int val){
    node* temp =head;
    node* n = new node(val);
    if(head== NULL){
        head = n;
        return;
    }
    while(temp->next!= NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void show(node* head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<"==>";
        temp = temp->next;
    }
    cout<<"Complete\n";
}
void cycle(node* &head,int k){
    node* temp=head;
    node* point;
    int count=1;
    while(temp->next!=NULL){
        if(count==k){
            point = temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next = point;
}
bool detect(node* &head){
    node* fast = head;
    node* slow = head;
    while(fast!= NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
void remove(node* &head){
    node* fast=head;
    node* slow = head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }
    while(slow!=fast);

    fast = head;
    while (fast->next!=slow->next)
    {
        fast=fast->next;
        slow= slow->next;
    }

    slow->next = NULL;
}
int main(){
    node* head=NULL;
    push(head,1);
    push(head,2);
    push(head,3);
    push(head,4);
    push(head,5);
    push(head,6);
    push(head,7);
    push(head,8);
    show(head);
    //cycle(head,4);
    cout<<detect(head);
}