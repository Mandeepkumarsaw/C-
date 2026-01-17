#include<bits/stdc++.h>
using namespace std; 

class Node {
public:
      int val;
      Node* left;
      Node* right;
      
      Node(int x) : val(x),left(nullptr),right(nullptr) {}
};

 
Node* buildTree(vector<int>& seq, int &idx) {
if(idx >= seq.size()) return NULL;

if(seq[idx] == -1) {
      idx++;
      return NULL;
}

Node* root = new Node(seq[idx++]);
root->left = buildTree(seq,idx);
root->right =buildTree(seq,idx);

return root;
}

int sumTree(Node* root) {
      if (root == NULL)   return 0;      //O(n)
      
      
      int L_sum = sumTree(root->left);
      int R_sum = sumTree(root->right);

      root->val += L_sum + R_sum;
      return root->val;
}

void printTree(Node* root) {
      if (root == NULL) return;

      cout<<root->val<<" ";
      printTree(root->left);
      printTree(root->right);
}

int main() {
      vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
      int idx = 0;
      Node* root = buildTree(preorder,idx);

      cout<<"Before conversion: ";
      printTree(root);
      cout<<endl;

      sumTree(root);

      cout<<"After conversion: ";
      printTree(root);
      cout<<endl;
      

      return 0;
}