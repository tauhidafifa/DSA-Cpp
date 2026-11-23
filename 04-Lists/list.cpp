#include <iostream>
//#include <list>
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
    void pf(int val){
        Node *newNode= new Node(val);
        if(head==NULL){
            head=newNode;
        } else{
            newNode->next=head;
            head=newNode;
        }
    }
    void reverse(){
        Node* prev=NULL;
        Node* curr=head;
        Node* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;

    }
    int mid(){
        Node* fast=head;
        Node *slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->data;
    }
     bool search(int key){
        if(head==NULL){
            cout<<"nothing to search";
        }
        Node *temp=head;
        while(temp!=NULL){
            if(temp->data==key){
                return true;
            }
            temp=temp->next;
        } 
        return false;
    }
    void remove_cycle(){
        Node *slow= head;
        Node *fast=head;
        bool iscycle=false;
        while(fast->next !=NULL and fast !=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                iscycle=true;
                break;
            }
        }
        //Node *slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        Node *temp=head;
        while(temp->next=slow){
            temp=temp->next;
        }
        temp->next=NULL;
    }
    void pl(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data;  
              temp=temp->next;
              cout<<endl;
        }
    }
};
int main(){
    List ll;
    ll.pf(1);
    ll.pf(2);
    ll.pf(4);
    ll. pl();

}

