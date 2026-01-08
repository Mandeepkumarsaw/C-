#include<bits/stdc++.h>
using namespace std;

class Node {
public:
      int val;
      Node* left;
      Node* right;
      
      Node(int x) : val(x),left(nullptr),right(nullptr) {}
};

static int idx = -1;
Node* build(vector<int>& seq){
    idx++;

    if(seq[idx] == -1) return NULL;
    
    Node* root = new Node(seq[idx]);
    root->left = build(seq);
    root->right = build(seq);

    return root;
}


int nodesSum(Node* root){
    if(root == NULL) return 0;
    // if(root->left && root->right == NULL) return 0;
     
    int leftsum = nodesSum(root->left);
    int rightsum = nodesSum(root->right);


    return root->val + leftsum + rightsum;
};

int main() {
    vector<int> order = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = build(order);

    cout<<"Sum of Nodes-"<<nodesSum(root);

    return 0;
}