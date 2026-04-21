#include<bits/stdc++.h>
using namespace std;

string transform(string &s){
    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0){
            s[i] = s[i] + 1;
        } else {
            s[i] = s[i] - 1;
        }
    }
    return s;
}

int main(){
    string s;
    cin >> s;

    cout << transform(s);

    return 0;
}

/*

Sample Input
abcg
Sample Output
badf
*/