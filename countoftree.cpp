#include<bits/stdc++.h>
using namespace std;

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
Node* buildtree(vector<int>& seq) {
   idx++;

   if(seq[idx] == -1) return NULL;

   Node* root = new Node(seq[idx]);
   root->left = buildtree(seq);  //left
   root->right = buildtree(seq); //right

   return root;
};

int counttree(Node* root) {
    if(root == NULL) return 0;

    int leftcount = counttree(root->left);
    int rightcount = counttree(root->right);

    return leftcount + rightcount + 1;
}




int main() {
    vector<int> order  = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root  = buildtree(order);

    cout<<"count of Nodes-"<<counttree(root);

    return 0;
}