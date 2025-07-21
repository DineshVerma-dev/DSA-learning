#include<bits/stdc++.h>
using namespace std;

class Node { //linkedlist node
 public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head){
    if(head == NULL) return;
    cout<<head->val<<" ";
    display(head->next);
}

void reversedisplay(Node* head){
    if(head == NULL) return;
    reversedisplay(head->next);
    cout<<head->val<<endl;
}

void insertAtEnd(Node* head , int val){
    Node* t  = new Node(val);
    while(head->next!=NULL) head = head->next;
    head->next = t;
}
int main(){
   Node* a = new Node(10);
   Node* b = new Node(30);
   Node* c = new Node(35);
   Node* d = new Node(111);
   a->next = b;
   b->next = c;
   c->next = d;
   
   Node* temp = a;
   while(temp!=NULL){
    //cout<<temp->val<<" ";
    temp = temp->next;
   }
  // cout<<a->next->next->next->val;
  display(a);
  insertAtEnd(a,12);
  display(a);
  insertAtEnd(a,23);
}