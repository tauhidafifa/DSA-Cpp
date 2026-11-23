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
    public:
    Node *head;
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
    bool isPalindrome(){
        if(head==NULL || head->next==NULL){
            return true;
        }
        Node *slow=head;
        Node *fast=head;
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node *prev=NULL;
        Node *curr=slow;
        Node *next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        Node *left=head;
        Node *right=prev;
        while(right!=NULL){
            if(left->data !=right->data){
                return false;
            }
            left=left->next;
            right=right->next;
        }
        return true;
    }
};
int main(){
    List ll;
    ll.pushFront(1);
    ll.pushFront(2);
    ll.pushFront(2);
    ll.pushFront(1);
    cout<<ll.isPalindrome();

}