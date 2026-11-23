#include <iostream>
#include <unordered_map>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int x) {
        val = x;
        next = NULL;
        random = NULL;
    }
};

// Copy Random List
Node* copyRandomList(Node* head) {

    if (head == NULL)
        return NULL;

    unordered_map<Node*, Node*> m;

    // STEP 1: Create copy of every node
    Node* oldtemp = head;

    while (oldtemp != NULL) {

        Node* copynode = new Node(oldtemp->val);

        // Original node -> Copy node
        m[oldtemp] = copynode;

        oldtemp = oldtemp->next;
    }

    // STEP 2: Connect next and random pointers
    oldtemp = head;

    while (oldtemp != NULL) {

        // Connect next
        m[oldtemp]->next = m[oldtemp->next];

        // Connect random
        m[oldtemp]->random = m[oldtemp->random];

        oldtemp = oldtemp->next;
    }

    return m[head];
}

// Print list
void printList(Node* head) {

    Node* temp = head;

    while (temp != NULL) {

        cout << "Node: " << temp->val;

        if (temp->random != NULL)
            cout << "  Random: " << temp->random->val;
        else
            cout << "  Random: NULL";

        cout << endl;

        temp = temp->next;
    }
}

int main() {

    // Create original list
    Node* a = new Node(7);
    Node* b = new Node(13);
    Node* c = new Node(11);

    // Connect next
    a->next = b;
    b->next = c;

    // Connect random
    a->random = c;
    b->random = a;
    c->random = c;

    cout << "Original List:" << endl;
    printList(a);

    // Copy list
    Node* copiedHead = copyRandomList(a);

    cout << "\nCopied List:" << endl;
    printList(copiedHead);

    return 0;
}