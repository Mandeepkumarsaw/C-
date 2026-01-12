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






void topView(Node* root) {
    queue<pair<Node*,int>> q;  //(node,HD)
    map<int,int> m;  //HD,node val;
    q.push({root,0});

    while(q.size() > 0){
        Node* curr = q.front().first;
        int currHD = q.front().second;
        q.pop();

         if(m.find(currHD) == m.end()) {
             m[currHD] = curr->val;
         }


        if(curr->left != NULL) {
            q.push({curr->left,currHD-1});
        }
        if(curr->right != NULL) {
            q.push({curr->right,currHD+1});
        }
    }

    for(auto it : m){
        cout<<it.second<<" ";
    }

    cout<<endl;
};


int main() {
    vector<int> order = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = build(order);

    topView(root);

    return 0;
}