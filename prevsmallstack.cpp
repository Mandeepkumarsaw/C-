#include<bits/stdc++.h>
using namespace std;

vector<int> prevSmall(vector<int> &arr) {   //O(n) & O(n)
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;  //store index values

    for(int i=0; i<n; i++) {
        while(!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }

        if(st.empty()) {
            ans[i] = -1;
        } else {
            ans[i] = st.top();
        }

        st.push(arr[i]);
    }

    return ans;
}

int main() {
    vector<int> arr = {4,5,2,10,8};
    vector<int> ans = prevSmall(arr);

    for(int val : ans) {
        cout<<val<<" ";
    }
    cout<<endl;     //-1 4 -1 2 2

    return 0;
}