#include<bits/stdc++.h>
using namespace std;

int main(){       //O(n) & O(n)
    vector<int> price = {100,80,60,70,60,75,85};

    //solution
    vector<int> ans(price.size(), 0);
    stack<int> st;

    for(int i=0; i<price.size(); i++){
           
        while(!st.empty() && price[st.top()] <= price[i]) {
            st.pop();
        }

        if(st.size() == 0){
              ans[i] = i+1;
        }else {
              ans[i] = i - st.top();     //here i is basically PrevHigh
        }
        
        st.push(i);

    }

   //print ans values
        for(int val : ans){
            cout<<val<<" ";
        }
        cout<<endl;
    
    return 0;    

}