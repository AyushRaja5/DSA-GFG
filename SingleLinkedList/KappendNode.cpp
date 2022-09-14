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
    node* temp= head;
    node* n= new node(val);
    if(head== NULL){
        head = n;
        return;
    }
    while(temp->next!= NULL){
        temp=temp->next;
    }
    temp->next = n;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"Completed\n";
}
int length(node* head){
    int l=0;
    node* temp= head;
    while(temp!=NULL){
        temp=temp->next;
        l++;
    }
    return l;
}
node* kappend(node* head, int k){
    node* newtail;
    node* newhead;
    node* temp= head;
    int l = length(head);
    int count=1;
    while(temp->next!= NULL){
        if(count==l-k){
            newtail=temp;
        }
        if(count==l-k+1){
            newhead = temp;
        }
        temp =temp->next;
        count++;
    }
    newtail->next=NULL;
    temp->next = head;
    return newhead;
}

int total(node* head) {
        int num =0;
        node* temp = head;
        while(temp!=NULL){
            num = num*10 + temp->data;
            temp = temp->next;
        }
        return num;
    }

node* reverse(node* &head)
    {
        // Initialize current, previous and next pointers
        node* current = head;
        node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
            // Reverse current node's pointer
            current->next = prev;
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        return prev;
    }
int main(){
    node* head = NULL;
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,7);
    insert(head,8);
    insert(head,9);
    insert(head,1);
    display(head);
//    node* nhead = kappend(head,3);
    // display(nhead);

    // cout<<total(head);
}