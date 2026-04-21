#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string &s){
    string res = "";

    res += s[0];

    for(int i = 1; i < s.size(); i++){
        if(s[i] != s[i-1]){
            res += s[i];
        }
    }

    return res;
}

int main(){
    string s;
    cin >> s;

    cout << removeDuplicates(s);

    return 0;
}

/*
Sample Input
aabccba
Sample Output
abcba
Explanation
For the given example, "aabccba", Consecutive Occurrence of a is 2, b is 1, and c is 2.

After removing all of the consecutive occurences, the Final ans will be : - "abcba".
*/