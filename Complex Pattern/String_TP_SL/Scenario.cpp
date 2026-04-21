#include <bits/stdc++.h>
using namespace std;

int helper(string &s,int k,char ch){
    int l=0,error=0,res=0;
    for(int r=0;r<s.size();r++){
        if(s[r]!=ch) error++;
        while(error>k){
            if(s[l]!=ch) error--;
            l++;
        }
        res=max(res,r-l+1);
    }
    return res;
}

int main(){
    int k;
    string s;
    cin>>k>>s;

    cout<<max(helper(s,k,'a'),helper(s,k,'b'));
}

/*
Output Format
A single integer denoting the maximum perfectness achievable.


Sample Input
2
abba
Sample Output
4
Explanation
We can swap the a's to b using the 2 swaps and obtain the string "bbbb". This would have all the b's and hence the answer 4.
Alternatively, we can also swap the b's to make "aaaa". The final answer remains the same for both cases.
*/