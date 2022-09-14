#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node* prev;
    node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};
void insert(node* &head, int val){
    node* n = new node(val);
    node* temp = head;
    if(head==NULL){
        head = n;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"Comleted\n";
}
int length(node* head){
    node* temp=head;
    int l=0;
    while(temp!=NULL){
        temp = temp->next;
        l++;
    }
    return l;
}
node* kappend(node* head, int k){
    node* newtail;
    node* newhead;
    node* temp = head;
    int count=1;
    int l = length(head);
    k = k%l;
    while(temp->next != NULL){
        if(count==l-k){
            newtail = temp;
        }
        if(count==l-k+1){
            newhead = temp;
        }
        temp = temp->next;
        count++;
    }
    newtail->next = NULL;
    temp->next = head;
    return newhead;
}
int main(){
    node*  head = NULL;
    insert(head,9);
    insert(head,8);
    insert(head,7);
    insert(head,6);
    insert(head,5);
    insert(head,4);
    insert(head,3);
    insert(head,2);
    insert(head,1);
    display(head);
    //cout<<length(head);
    node* nhead = kappend(head,3);
    display(nhead);
}