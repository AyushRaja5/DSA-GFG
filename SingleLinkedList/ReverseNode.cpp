#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
        node(int val){
            data = val;
            next = NULL;
        }
};
void insert(node* & head, int val){
    if(head==NULL){
        head = new node(val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void display(node* & head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"complete";
}
node* reverse(node* &head){
    node* prev = NULL;
    node*curr = head;
    node* nxt;
    while(curr!=NULL){
        nxt = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nxt;
    }
    return prev;
}

node* reverse2(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* rest = reverse2(head->next);
    head->next->next = head;
    head->next= NULL;
    return rest;
}
int main(){
    node* head =NULL;
    insert(head,6);
    insert(head,7);
    insert(head,8);
    insert(head,9);
    display(head);
    node* h = reverse2(head);
    display(h);
}