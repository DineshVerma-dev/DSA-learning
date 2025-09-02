#include<bits/stdc++.h>
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

void levelOrderQueue(Node* root){ // BFS
    queue<Node*> q;
    q.push(root);
    while(q.size() > 0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}

void itervativePreOrderTraversal(Node* root){
    stack<Node*> st;
   if(root!=NULL) st.push(root);
    while(st.size()>0){
        Node* temp = st.top();
        st.pop();
        cout<<temp->val<<" ";
       // ans.push(temp->val);
        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
    }
    cout<<endl;
}

void iteravtivePostOrderTraversal(Node*root){
    stack<Node*> st;
    if(root) st.push(root);
   while(st.size()>0){
        Node* temp = st.top();
        st.pop();
        cout<<temp->val<<" ";
       // ans.push(temp->val);
        if(temp->left) st.push(temp->left);
        if(temp->right) st.push(temp->right);
    }
    cout<<endl;
}

void iteravtiveInOrderTraversal(Node* root){  // This is the LVR (left root right )
    stack<Node*> st;
    Node* node = root;
    while(st.size()>0 || node!=NULL) {
       if(node) {
           st.push(node);
           node = node->left;
       }  else {
           if(!st.empty()) {
               Node* temp = st.top();
               st.pop();
               cout<<temp->val<<" ";
               node = temp->right;
           }
       }
    }
}
Node * construct(int arr[],int n){
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
int main() {
    int arr[] = {1,2,3,4,5,6,INT_MIN,6,INT_MIN,INT_MIN,7,8,9,INT_MIN};

     int n = sizeof(arr)/sizeof(arr[0]);
       Node* root = construct(arr,n);
       //levelOrderQueue(root);
       //itervativePreOrderTraversal(root);
       //iteravtivePostOrderTraversal(root);
       iteravtiveInOrderTraversal(root);

   return 0;
}