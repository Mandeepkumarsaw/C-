#include <bits/stdc++.h>    
using namespace std;


void printSubsets(vector<int> &arr,vector<int> &ans, int i) {

    if(i==arr.size()){             //base case
        for(int val : ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }

    //include
    ans.push_back(arr[i]);
    printSubsets(arr,ans,i+1);

    //backtracking
    ans.pop_back();

    //exclue
    printSubsets(arr,ans,i+1);
}

int main(){
    vector<int> arr ={1,2,3};
    vector<int> ans ;
   
    cout<<"Total Subsets:- "<<endl;
    printSubsets(arr,ans,0);
    return 0;
}