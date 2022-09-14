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


int main()
{
    node* head= NULL;
    insert(head,3);
    insert(head,4);
    insert(head,6);
    insert(head,6);
    insert(head,5);
    insert(head,7);
    display(head);
    // node* n = removeDuplicates(head);
    // display(n);
}

