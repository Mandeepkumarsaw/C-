#include<bits/stdc++.h>
using namespace std;

char firstNonRepeating(string &s){
    unordered_map<char,int> freq;

    for(char ch : s){
        freq[ch]++;
    }

    for(char ch : s){
        if(freq[ch] == 1){
            return ch;
        }
    }

    return '-';
}

int main(){
    int T;
    cin >> T;

    while(T--){
        string s;
        cin >> s;

        char ans = firstNonRepeating(s);

        if(ans == '-'){
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }
    }

    return 0;
}

/*
Output Format
For each testcase, print the first non repeating character present in string. Print -1 if there is no non repeating character.


Sample Input
4
codingblocks
abbac
java
ccdd
Sample Output
d
c
j
-1
*/