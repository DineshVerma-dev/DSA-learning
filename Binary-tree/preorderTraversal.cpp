#include <bits/stdc++.h>
using namespace std;

class Node { //This is nothing but the binary tree
 public :
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this -> left = NULL;
        this -> right = NULL;
    }
};
void preorderTraversal(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void printlevel(Node* root, int x){
    if(root == NULL) return ;
    if(x == 3){
        cout<<root->val;
        return;
    } 
    printlevel(root->left,x+1);
    printlevel(root->right,x+1);
}
int main(){
    Node* a = new Node(1); // this is my root node
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left  = f;
    c->right = g;
   
   
   //preorderTraversal(a);
   //printlevel(a,1);
  // printlevel(a,2);
   printlevel(a,1);
    
    return 0;
}