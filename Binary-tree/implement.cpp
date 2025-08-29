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

void displayTree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
  
    displayTree(root->left);
    displayTree(root->right);

}

int sum(Node* root){
    if(root == NULL) return 0;
   return root->val + sum(root->left) + sum(root->right);
    
}

int sizeofBT(Node*root){
    if(root == NULL) return 0;
    return  1 + sizeofBT(root->left) + sizeofBT(root->right);
}

int findmax(Node* root){
    if(root == NULL) return INT_MIN;
    return max(root->val,max(findmax(root->left),findmax(root->right)));
}

int findlevel(Node* root){
    if(root == NULL) return 0;
    return 1 + max(findlevel(root->left) , findlevel(root->right));
}

//  1)leetcode diameter of the Binary Tree;
//  2)leetcode 100 same tree
//  3)leetcode 226 invert the binary tree;

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
   
    displayTree(a);
    cout<<sum(a)<<"sum";
    cout<<endl;
    cout<<sizeofBT(a)<<"SizeofBT";
    cout<<endl;
    cout<<findmax(a)<<"Findmax"<<endl;
    cout<<findlevel(a)<<"FindLevel"<<endl;
    cout<<diameterofBT(a)<<"Diamenter"<<endl;
    return 0;
}