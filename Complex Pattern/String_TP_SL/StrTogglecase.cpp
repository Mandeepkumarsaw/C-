#include<bits/stdc++.h>
using namespace std;

string toggleCase(string &s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 'a' + 'A';
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] - 'A' + 'a';
        }
    }
    return s;
}

int main(){
    string s;
    cin >> s;

    cout << toggleCase(s);

    return 0;
}


/*
Sample Input
abC
Sample Output
ABc
Explanation
Toggle Case means to change UpperCase character to LowerCase character and vice-versa.
*/