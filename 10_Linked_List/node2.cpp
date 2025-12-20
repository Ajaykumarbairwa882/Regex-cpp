#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};
void deletefromIndex(node* &head, int n) {
    node* s = head;
    node* f = head;

    while (n > 0) {
        s = f;
        f = f->next;
        n--;
    }
    s->next = f->next;
    delete f;
}

void insertAtIndex(node* &head, int n, int val) {
    node* newNode = new node(val);
    if (n == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }
    node* s = head;
    node* f = head;
    while (n > 0 && f != NULL) {
        s = f;
        f = f->next;
        n--;
    }
    s->next = newNode;
    newNode->next = f;
}


void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main() {
    node* head = new node(1);
    node* second = new node(2);
    node* third = new node(3);
    node* fourth = new node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;

    print(head);
    deletefromIndex(head,2);
    cout<<endl;
     print(head);
         cout<<endl;
     insertAtIndex(head, 0, 99);
    print(head);
}


