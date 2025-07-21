#include<bits/stdc++.h>
using namespace std;

class Node { //userdefined data type
 public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
 
class linkedList { //this is user defined data structure
public: 
  Node* head = NULL;
  Node* tail = NULL;
  int size;
  linkedList(){
    head = tail = NULL;
    size = 0;
  }
  void insertAtEnd(int val){
    Node* temp = new Node(val);
    if(size == 0) head = tail = temp;
    else {
        tail -> next = temp;
        tail = temp;
    }
    size++;
  }
  
  void insertAthead(int val){
    Node* temp = new Node(val);
    if(size == 0) head = tail = temp;
    else {
        temp -> next = head;
        head = temp;
    }
    size++;
  }
   void insertAtIdx(int idx, int val){
    if(idx < 0 || idx > size) cout<<"INVALID INput";
    else if(idx == 0) insertAthead(val);
    else if(idx == size) insertAtEnd(val);
    else {
        Node* t = new Node(val);
        Node* temp = head;
        for(int i=1; i<=idx-1; i++){
            temp = temp -> next;
        }
        t -> next = temp -> next;
        temp -> next =t;
        size++;
    }
   }
   void getAtIdx(int idx){
    if(idx < 0 || idx >= size) {
        cout << "INVALID Index" << endl;
        return;
    }
    Node* temp = head;
    for(int i = 0; i < idx; i++){
        temp = temp->next;
    }
    cout << temp->val << endl;
   }
  void display(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
  }
  
};
int main(){
   linkedList ll ;
   ll.insertAtEnd(10); // {10}
   ll.display();
   ll.insertAtEnd(23); // {10 ->20 -> NULL}
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAthead(30);
     ll.display();
     ll.insertAtIdx(1,3);
    ll.display(); 
    ll.getAtIdx(3);

}