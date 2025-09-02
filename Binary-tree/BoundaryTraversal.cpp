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

int findlevel(Node* root){
    if(root == NULL) return 0;
    return 1 + max(findlevel(root->left) , findlevel(root->right));
}
void printlevel(Node* root, int curr, int level){
    if(root == NULL) return ;
    if(curr == level){
        cout<< root->val<<" ";
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

Node * construct(int arr[],int n){
    if(n == 0) return NULL;
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size() > 0 && i<n){
     Node* temp = q.front();
     q.pop();
     Node* l;
     Node* r;
     if(arr[i]!=INT_MIN) l = new Node(arr[i]);
     else l = NULL;
     if(j!=n && arr[j]!=INT_MIN) r = new Node(arr[j]);
     else r = NULL;

     temp->left= l;
     temp->right=r;

     if(l!=NULL) q.push(l);
     if(r!=NULL) q.push(r);
  
     i+=2;
     j+=2;
     
    }
    return root;
}




// Boundary traversal coding
void leftBoundaryTraversal(Node* root){
    if(root == NULL) return;
    if(root->left==NULL && root->right ==NULL) return;
    cout<<root->val<<" ";
    leftBoundaryTraversal(root->left);
    if(root->left==NULL) leftBoundaryTraversal(root->right);
}
 
void rightBoundaryTraversal(Node* root) {
    if(root == NULL) return;
    if(root->left==NULL && root->right ==NULL) return;
    rightBoundaryTraversal(root->right);
    if(root->right==NULL) rightBoundaryTraversal(root->left);
    cout<<root->val<<" ";
}
void bottomBoundary(Node* root){
    if(root == NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}
void printBoundary(Node* root){
      leftBoundaryTraversal(root);
      cout<<endl;
      bottomBoundary(root);
        cout<<endl;
      rightBoundaryTraversal(root->right);
}



int main(){

    int arr[] = {
        1,
        2, 3,
        4, 5, INT_MIN, 6,
        7, 8, INT_MIN, 9, 10,
        INT_MIN, 11, INT_MIN, 12,INT_MIN,13,INT_MIN, 14,
        INT_MIN,15, 16, INT_MIN, 17,INT_MIN,INT_MIN, 18,
        INT_MIN, 19, INT_MIN, INT_MIN, INT_MIN, 20,21,22,23,INT_MIN, 24,25,26,27,INT_MIN,28,INT_MIN,INT_MIN
    };

     int n = sizeof(arr)/sizeof(arr[0]);
       Node* root = construct(arr,n);
     //LevelOrderTraversal(root);
     
     printBoundary(root);

    return 0;
}