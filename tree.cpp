#include<bits/stdc++.h>
using namespace std;

//Binary Tree of Preorder sequence -- RLR

class Node {
public:
   int data;
   Node* left;
   Node* right;

   Node(int val) {
    data = val;
    left = right = NULL;
   }
};

static int idx = -1;
Node* buildTree(vector<int> preorder) {
    idx++;

    if(preorder[idx] == -1) return NULL;

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);  //LEFT
    root->right = buildTree(preorder);  //RIGHT

    return root;
}

//PREORDER
void preordered(Node* root) {
    if(root == nullptr) return;

    cout<<root->data;
    preordered(root->left);
    preordered(root->right);
}

//INORDER
void inorder(Node* root) {
    if(root == NULL) return;

    inorder(root->left);
    cout<<root->data;
    inorder(root->right);

}

//POSTORDER
void postorder(Node* root) {
    if(root == NULL) return;

    postorder(root->left);
    postorder(root->right);
     cout<<root->data;
}


int main(){
     vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

     Node* root = buildTree(preorder);
     cout << root->data;
     cout << root->left->data;
     cout << root->right->data<<endl;

     cout<<"Preorder-";
     preordered(root);
     cout<<endl;

     cout<<"Inorder-";
     inorder(root);
     cout<<endl;

     cout<<"Postorder-";
     postorder(root);
     cout<<endl;


     return 0;
}     
