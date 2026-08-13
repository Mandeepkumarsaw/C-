#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> longestRepeating(string s, string queryCharacters, vector<int>& queryIndices) {
        int n = s.size();
        vector<int> ans;
        int maxLen = 1;

        // Precompute initial longest run
        int curr = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i-1]) curr++;
            else curr = 1;
            maxLen = max(maxLen, curr);
        }

        for (int q = 0; q < queryCharacters.size(); q++) {
            int idx = queryIndices[q];
            char c = queryCharacters[q];
            if (s[idx] == c) {
                ans.push_back(maxLen);
                continue;
            }

            // Update character
            s[idx] = c;

            // Recompute run locally around idx
            int l = idx, r = idx;
            while (l > 0 && s[l-1] == s[idx]) l--;
            while (r < n-1 && s[r+1] == s[idx]) r++;
            int newLen = r - l + 1;

            maxLen = max(maxLen, newLen);
            ans.push_back(maxLen);
        }

        return ans;
    }
};


int main() {
    string s = "aabaa";
    string queryCharacters = "cc";
    int queryIndicesArr[] = {1, 2};
    vector<int> queryIndices(queryIndicesArr, queryIndicesArr + 2);

    Solution obj;
    vector<int> result = obj.longestRepeating(s, queryCharacters, queryIndices);

    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}