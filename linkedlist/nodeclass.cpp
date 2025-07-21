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
int main(){
   Node a(10);
   Node b(9);
   Node c(5);
   Node d(45);

   a.next = &b;
   b.next = &c;
   c.next = &d;

   //cout<<(*(a.next)).val;
   // cout<<(((a.next)->next)->next)->val;
   
    return 0;
}