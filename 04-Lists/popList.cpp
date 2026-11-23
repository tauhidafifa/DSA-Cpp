#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    Node *head;
    public:
    List(){
        head=NULL;
    }
     void pushFront(int val){
        Node * newNode=new Node(val);
        if(head==NULL){
            head=newNode;
        } else{
            newNode ->next=head;
            head=newNode;
        }
    }
    void popFront(){
        Node *temp=head;
        if(head==NULL){
            cout<<"nothing to pop";
        } else{
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
    }
    void popBack(){
        Node *temp=head;
        if(head==NULL){
            cout<<"list is empty nothing to pop;";
        } 
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
    }
    void middlePop(int pos){
        if(head==NULL){
            cout<<"list is empty";
        }
        Node *curr=head;
        for(int i=0;i<pos-1;i++){
            curr=curr->next;
        }
        Node *temp=curr->next;
        curr->next=curr->next->next;
        delete temp;
    }
    void printll(){
        if(head==NULL){
            cout<<"list is empty";
        }
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    List ll;
    ll.pushFront(1);
    ll.pushFront(2);
    ll.pushFront(3);
    ll.pushFront(4);
    ll.pushFront(5);
    ll.pushFront(6);
    ll.pushFront(7);
    ll.printll();
    ll.popBack();
    ll.printll();
    ll.popFront();
    ll.printll();
    ll.middlePop(3);
    ll.printll();
}