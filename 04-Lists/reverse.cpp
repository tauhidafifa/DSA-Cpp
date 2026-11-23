#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //public:
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
    void reverse(){
        Node *prev=NULL;
        Node *curr=head;
        Node *next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }
    void print(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    List l;
    l.pushFront(5);
    l.pushFront(4);
    l.pushFront(3);
    l.pushFront(2);
    l.pushFront(1);
    l.print();
    cout<<endl;
    l.reverse();
    cout<<"reverse:";
    l.print();
}