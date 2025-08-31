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

int findlevel(Node* root){
    if(root == NULL) return 0;
    return 1 + max(findlevel(root->left) , findlevel(root->right));
}
void printlevel(Node* root, int curr, int level){
    if(root == NULL) return ;
    if(curr == level){
        cout<< root->val;
        return;
    } 
    printlevel(root->left,curr+1,level);
    printlevel(root->right,curr+1,level);
}

void LevelOrderTraversal(Node* root){
    int n = findlevel(root);
    for(int i=1; i<=n; i++){
        printlevel(root,1,i);
        cout<<endl;
    }
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
   //printlevel(a,1);

   LevelOrderTraversal(a);
    
    return 0;
}