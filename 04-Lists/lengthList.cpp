#include <iostream>
using namespace std;
class Node{
    public:int data;
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
    void pushback(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=newNode;
        }
        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=NULL;
    }
    int length(){
        int count=0;
        Node *temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    //self discovery
    void print(){
        Node *temp=head;
        while(temp->next!=NULL){
            cout<<temp->data;
            temp=temp->next;
        }
        cout<<temp->data;
    }
};
int main(){
    List l;
    l.pushback(1);
    l.pushback(2);
    l.pushback(3);
    l.pushback(4);
    l.pushback(5);
    l.print();
    cout<<endl;
    cout<<l.length();
}