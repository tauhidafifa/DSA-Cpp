#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;

public:
    List() {
        head = NULL;
    }

    void pushFront(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    Node* getHead() {
        return head;
    }

    void printList(Node* head) {
        Node* curr = head;

        while (curr != NULL) {
            cout << curr->data << " -> ";
            curr = curr->next;
        }

        cout << "NULL" << endl;
    }
};

Node* swapPairs(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* curr = head;
    Node* back = NULL;
    Node* temp = NULL;
    Node* pre = NULL;
    Node* newHead = NULL;

    while (curr != NULL && curr->next != NULL) {

        back = curr->next;

        if (newHead == NULL) {
            newHead = back;
        }

        temp = back->next;

        back->next = curr;
        curr->next = temp;

        if (pre != NULL) {
            pre->next = back;
        }

        pre = curr;
        curr = curr->next;
    }

    return newHead;
}

int main() {
    List ll;

    ll.pushFront(0);
    ll.pushFront(2);
    ll.pushFront(3);
    ll.pushFront(4);

    cout << "Original List: ";
    ll.printList(ll.getHead());

    Node* result = swapPairs(ll.getHead());

    cout << "After Swapping Pairs: ";
    ll.printList(result);

    return 0;
}