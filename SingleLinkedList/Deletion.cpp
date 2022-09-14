#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int val){
            data=val;
            next=NULL;
        }
};
void insert(node* &head, int val){
    node* temp = head;
    node* n = new node(val);
    if(head==NULL){
        head= n;
        return ;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"Compelete\n";
}
void delhead(node* &head){
    node* todelete = head;
    head= head->next;
    delete todelete;
}
void deletion(node* &head, int k){
    if(head==NULL){
        return;
    }

    if(head->data==k || head->next==NULL){
        delhead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=k){
        temp= temp->next;
    }
    node* todelete = temp->next;
    temp->next= temp->next->next;
    delete todelete;
}
int main(){
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);

    insert(head,5);
    insert(head,6);
    insert(head,7);
    insert(head,8);
    display(head);

    delhead(head);
    display(head);

    deletion(head,6);
    display(head);

}