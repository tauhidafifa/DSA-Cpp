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
    void pushBack(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
        } 
        Node* temp=head;
        while(temp->next !=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=NULL;
    }
    void middlePush(int val,int pos){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
        }
        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void printll(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    List ll;
   // ll.middlePush(1,0);
    ll.pushFront(0);
    ll.pushFront(2);
    ll.pushFront(3);
    ll.pushFront(4);
    ll.pushBack(5);
    ll.pushBack(776);
    ll.middlePush(9,3);
    ll.printll();

}
