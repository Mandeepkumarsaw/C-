#include<bits/stdc++.h>
using namespace std;

char mostFrequent(string &s){
    int freq[256] = {0};

    for(char ch : s){
        freq[ch]++;
    }

    int maxFreq = 0;
    char ans;

    for(char ch : s){
        if(freq[ch] > maxFreq){
            maxFreq = freq[ch];
            ans = ch;
        }
    }

    return ans;
}

int main(){
    string s;
    cin >> s;

    cout << mostFrequent(s);

    return 0;
}


/*
Sample Input
aaabacB
Sample Output
a
Explanation
Frequency of each character in the string:

'a' → 4 times
'b' → 2 times
'c' → 1 time
'B' → 1 time
Note: Since 'B' (uppercase) is different from 'b' (lowercase), they are counted separately.

The character with the highest frequency is 'a' (appearing 4 times).
*/