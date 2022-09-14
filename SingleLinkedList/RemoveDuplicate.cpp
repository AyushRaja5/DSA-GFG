#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
    node(int val){
        data=val;
        next = NULL;
    }
};

void insert(node* &head, int val){
    node* temp=head;
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"Completed\n";
}

node* remove(node* head){
    node* temp=head;
    node* nxt = head->next;
    while(temp!=NULL){
        if(temp->data==nxt->data){
            temp->next=nxt->next;
        }
        temp=temp->next;
        nxt = nxt->next;
    }
    return head;
}

int main()
{
    node* head= NULL;
    insert(head,3);
    insert(head,3);
    insert(head,3);
    insert(head,3);
    insert(head,3);
    insert(head,3);
    insert(head,3);
    display(head);
    //node* n = dup(head);
    display(head);
}

