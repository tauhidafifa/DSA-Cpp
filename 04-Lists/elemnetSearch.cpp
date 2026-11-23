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
    /*
    // correct approach but doinng extra work.....
    void pushFront(int val){
        Node *newNode=new Node(val);
        Node *temp=head;
        if(head==NULL){
            head=newNode;
        } else{
            head=newNode;
            head->next=temp;
        }
    }*/
    void pushFront(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=newNode;
        } else {
             newNode->next=head;
            head=newNode;
          }
    }
    /*
    void search(int val){
        Node *temp=head;
        if(head==NULL){
            cout<<"empty list";
        }
        while(temp->next!=NULL){
            if(temp->data==val){
                cout<<"elements is present";
            } else{
                cout<<"not present";
            }
        }

    }
        */
    int searchLL(int val){
        if(head==NULL){
            cout<<"nothing to search";
        }
        Node *temp=head;
        int idx=0;
        while(temp->next!=NULL){
            if(temp->data==val){
                return idx;
            } 
            temp=temp->next;
            idx++;
        }
        return -1;
    }

};
int main(){
    List ll;
    ll.pushFront(7);
    ll.pushFront(6);
    ll.pushFront(5);
    ll.pushFront(4);
    ll.pushFront(3);
    ll.pushFront(2);
    ll.pushFront(1);
     
     cout<<ll.searchLL(4);


}