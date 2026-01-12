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

void level(Node* root,int k) {
    if(root==NULL) return;

    if(k == 1) {
        cout<<root->val<<" ";
        return;
    }

    level(root->left,k-1);
    level(root->right,k-1);
}

int main() {
    vector<int> order = {1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = build(order);
    int k = 2;
    level(root,k);

    return 0;
}