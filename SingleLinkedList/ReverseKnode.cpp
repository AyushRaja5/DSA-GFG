#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int val){
            data= val;
            next = NULL;
        }
};
void push(node* & head, int val){
    node* n = new node(val);
    node* temp=head;
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void show(node* head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Complete\n";
}

node* revese(node* &head, int k){
    node* prev=NULL;
    node* curr = head;
    node* nxt;
    int count=0;
    while(curr!=NULL && count<k){
        nxt = curr->next;
        curr->next=prev;
        prev = curr;
        curr = nxt;
        count++;
    }
    if(nxt!=NULL){
        head->next = revese(nxt,k);
    }
    
    return prev;
}
 int main(){
     node* head=NULL;
     push(head,1);
     push(head,2);
     push(head,3);
     push(head,4);
     push(head,5);
     show(head);
     node* h=revese(head,2);
     show(h);
 }