#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int val){
        data = val;
        next=NULL;
    }
};
void push(node* &head, int val){
    node* n = new node(val);
    node* temp = head;
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
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"Complete\n";
}
int length(node* &head){
    node* temp=head;
    int len=0;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}
void intersect(node* &head1, node* &head2,int pos){
    node* temp=head1;
    while(temp->data!=pos){
        temp=temp->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }

    temp2->next=temp;
}
int checkIntersect(node* &head1, node* &head2){
    int l1=length(head1);
    int l2 = length(head2);
    int d=0;
    node* ptr1;
    node* ptr2;
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d = l2-l1;
        ptr1 =head2;
        ptr2= head1; 
    }
    while(d>0){
        ptr1=ptr1->next;
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2 = ptr2->next;
    }
    return -100;
}
int main(){
    node* head=NULL;
    node* head2=NULL;
    push(head,1);
    push(head,2);
    push(head,3);
    push(head,44);
    push(head,5);
    push(head,6);
    push(head,7);
    //show(head);
    //cout<<length(head);
    push(head2,11);
    push(head2,22);
    push(head2,33);
    push(head2,44);
    push(head2,55);
    push(head2,66);
    push(head2,77);
    //show(head2);

    intersect(head,head2,44);
    show(head2);
    show(head);
    cout<<checkIntersect(head,head2);
}