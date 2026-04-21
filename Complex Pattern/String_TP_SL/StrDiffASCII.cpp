#include<bits/stdc++.h>
using namespace std;

string solve(string &s){
    string res = "";

    for(int i = 0; i < s.size() - 1; i++){
        res += s[i];

        int diff = s[i+1] - s[i];
        res += to_string(diff);
    }

    res += s.back();

    return res;
}

int main(){
    string s;
    cin >> s;

    cout << solve(s);

    return 0;
}

/*
Sample Input
acb
Sample Output
a2c-1b
Explanation
For the sample case, the Ascii code of a=97 and c=99 ,the difference between c and a is 2.Similarly ,the Ascii code of b=98 and c=99 and their difference is -1. So the ans is a2c-1b.
*/