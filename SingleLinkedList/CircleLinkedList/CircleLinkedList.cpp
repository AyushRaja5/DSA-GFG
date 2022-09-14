#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

void push(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        n->next = n;       
        head= n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->next=n;
    n->next = head;
}
void show(node* head){
    node* temp= head;
    do{
        cout<<temp->data<<"==>";
        temp = temp->next;
    }while(temp!=NULL);
    cout<<"Compeleted";
}

int main(){
    node* head = NULL;
    push(head,2);
    push(head,4);
    push(head,5);
    push(head,6);
    push(head,7);
    push(head,8);
    push(head,9);
    //cycle(head);
    show(head);
}