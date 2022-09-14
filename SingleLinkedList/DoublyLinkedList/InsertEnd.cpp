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
    cout<<"Comleted";
}
void insertFront(node* &head, int val){
  //  node*  temp = head;
    node* n = new node(val);
    n->next = head;
    head->prev = n;
    head = n;
}
int main(){
    node* head = NULL;
    insert(head, 4);
    insert(head, 5);
    insert(head, 7);
    insert(head, 8);
    display(head);
    insertFront(head, 9);
    insertFront(head, 10);
    display(head);
}