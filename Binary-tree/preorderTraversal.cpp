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
int main(){
    Node* a = new Node(1); // this is my root node
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(11);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left  = f;
    c->right = g;
    g->right = h;
   
   preorderTraversal(a);
    
    return 0;
}