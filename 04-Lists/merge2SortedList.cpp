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
    void pushf(int val){
        Node * n=new Node(val);
        if(head==NULL) head=n;
        else{
            n->next=head;
            head=n;
        }
    }
    Node* merge(Node *h1,Node *h2){
        
        if(h1==NULL) {
            return h2;
        }
        if(h2==NULL) return h1;
        
        if(h1->data <h2->data){
            h1->next=merge(h1->next,h2);
            return h1;
        } else{
            h2->next= merge(h1,h2->next);
            return h2;
        }
        

    }

};
int main(){
    List l1;
    l1.pushf(5);
    l1.pushf(4);
    l1.pushf(1);
    List l2;
    l2.pushf(9);
    l2.pushf(7);
    l2.pushf(6);
    l2.pushf(3);
    l2.pushf(2);
    Node *ans= l1.merge(l1.head,l2.head);
    while(ans!=NULL){
        cout<<ans->data<<" ";
        ans=ans->next;
    }

}