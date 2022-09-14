#include <iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int val){
            data= val;
            next=NULL;
        }
};
void push(node* &head,int val){
    if(head==NULL){
        head = new node(val);
        return;
    }
    node* temp = head;
    node* n = new node(val);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next= n;
}
void show(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"==>";
        temp = temp->next;
    }
    cout<<"Complete\n";
}
void cycle(node* &head,int k){
    node* temp=head;
    node* point;
    int count=1;
    while(temp->next!=NULL){
        if(count==k){
            point = temp;
        }
        temp= temp->next;
        count++;
    }
    temp->next = point;
}
bool detectCycle(node* &head){
    node* rabbit = head;
    node* tortoise = head;
    while(rabbit!=NULL && rabbit->next!=NULL){
        rabbit = rabbit->next->next;
        tortoise = tortoise->next;
        if(tortoise==rabbit){
            return 1;
        }       
    }
    return 0;
}
int l(node* head){
    if(detectCycle(head)==1){
        
    }
}
int main(){
    node* head=NULL;
    push(head,2);
    push(head,3);
    push(head,4);
    push(head,5);
    push(head,6);
    push(head,7);
    push(head,8);
    push(head,9);
    push(head,10);

    //cycle(head,4);
    show(head);
    cout<<detectCycle(head);
    
}