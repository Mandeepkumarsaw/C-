#include<bits/stdc++.h>
using namespace std;

int main() {           //TC-O(n)      SC-O(n)
    vector<int> arr = {6,8,0,1,3};
    int n = arr.size();

    //next greater element(immediate)
    stack<int> s;
    vector<int> ans(n,0);

    for(int i=n-1; i>=0; i--) {
        while(!s.empty() && s.top() <= arr[i]) {
           s.pop();
        }    
        if(s.empty()){
                ans[i]= -1;
        } else {
               ans[i] = s.top();
        }
       s.push(arr[i]);  
    } 

    //print
    for(int val : ans){
        cout<<val<<" ";
    } 
    cout<<endl;

    return 0;
}