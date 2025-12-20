#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* Next;

    Node(int val) {
        data = val;
        Next = NULL;
    }
};

int length(Node* temp) {
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->Next;
    }
    return count;
}

int main() {

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    head->Next = second;
    second->Next = third;
    third->Next = fourth;

    Node* temp = head;

    // while (temp != NULL) {
    //     cout << temp->data << " -> ";
    //     temp = temp->Next;
    // }
    // cout << "NULL" << endl;
    // cout << "Length of Linked List: " << length(head);

   

    return 0;
}
                                                                                                 