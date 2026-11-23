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
    int middle(){
        Node *slow=head;
        Node *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->data;
    }
};
int main(){
     List l;
    l.pushFront(6);
    l.pushFront(5);
    l.pushFront(4);
    l.pushFront(3);
    l.pushFront(2);
    l.pushFront(1);
    cout<<l.middle();

}