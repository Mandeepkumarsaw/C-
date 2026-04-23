#include<bits/stdc++.h>
using namespace std;

int longestKUnique(string &s, int k){
    unordered_map<char,int> freq;
    int l = 0, maxLen = -1;

    for(int r = 0; r < s.size(); r++){
        freq[s[r]]++;

        while(freq.size() > k){
            freq[s[l]]--;
            if(freq[s[l]] == 0){
                freq.erase(s[l]);
            }
            l++;
        }

        if(freq.size() == k){
            maxLen = max(maxLen, r - l + 1);
        }
    }

    return maxLen;
}

int main(){
    int T;
    cin >> T;

    while(T--){
        string s;
        cin >> s;

        int k;
        cin >> k;

        cout << longestKUnique(s, k) << endl;
    }

    return 0;
}