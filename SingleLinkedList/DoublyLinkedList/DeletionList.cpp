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
void delhead(node* &head){
    node* todel = head;
    head = head->next;
    head->prev = NULL;
    delete todel;
}
void deletion(node* head, int val){
    node* temp = head;
    int count=1;
    
    while (temp->data!=val)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if(temp->next!=NULL)    temp->next->prev = temp->prev;
    delete temp;
    cout<<count<<" Node deleting\n";
}
int main(){
    node* head = NULL;
    insert(head, 3);
    insert(head, 7);
    insert(head, 8);
    insert(head, 9);
    display(head);
    deletion(head, 8);
    display(head);
    delhead(head);
    display(head);
}
