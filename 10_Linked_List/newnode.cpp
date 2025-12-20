#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data=val;
        next=NULL;
    }
};
// print all nodes
void print(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
// insert node at front
void insertbegin(node* &head,int val){
    node *newnode = new node(val);
    newnode->data=val;
    newnode->next=head;
    head=newnode;
}

// insert node at last
void insertend(node* & head, int val){
    node *newnode = new node(val);
    newnode->next=NULL;
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}

void deletefront(node* &head){
    node*temp=head;
    head=temp->next;
    delete(temp);
}
void deleteend(node* &head){
    node*temp=head;
    node*temp1=head->next;
    while(temp1->next!=NULL){
        temp=temp->next;
        temp1=temp1->next;
    }
    temp->next=NULL;
    delete(temp1);
}
// bool isSorted(node* head){
//     if(head->next == NULL)
//         return true;

//     node* temp = head;

//     while(temp->next != NULL){
//         if(temp->data > temp->next->data)
//             return false;
//         temp = temp->next;
//     }
//     return true;
// }

bool isSorted(node *head)
{
    node *temp = head;
    node *temp1 = head->next;
    while (temp1 != NULL)
    {
        if(temp->data > temp1->data)return false;
        temp = temp->next;
        temp1 = temp1->next;
    }
    return true;
}

vector<int> reverse(node* &head) {
    vector<int> v;
    node* temp = head;   
    while (temp != NULL) {
        v.push_back(temp->data);
        temp = temp->next;
    }
    reverse(v.begin(), v.end());
    return v;
}


int main(){
    node* head = new node(5);//new node 
    node* second = new node(6);// new node
    head->next=second;

    insertbegin(head,4);// insert value at begin 
    insertbegin(head,3);
    insertbegin(head,2);
    insertbegin(head,1);
    // insertend(head,100);// insert at last
    // deletefront(head);
    // deleteend(head);

    // if(isSorted(head))
    // cout << "Sorted\n";
    // else
    // cout << "NOT Sorted\n";

    vector<int> ans = reverse(head);
    // print vector
    for (int x : ans) {
        cout << x << " ";
    }


    // print(head);// print node
}  