#include<bits/stdc++.h>
using namespace std;

bool canPlace(vector<int> &stalls, int n, int c, int dist) {
    int count = 1;  // first cow at first stall
    int lastPos = stalls[0];

    for(int i = 1; i < n; i++) {
        if(stalls[i] - lastPos >= dist) {   //logic of maximum cows
            count++;
            lastPos = stalls[i];
        }
        if(count >= c) return true;
    }
    return false;
}

int main() {
    int n, c;
    cin >> n >> c;

    vector<int> stalls(n);
    for(int i = 0; i < n; i++) cin >> stalls[i];

    sort(stalls.begin(), stalls.end());

    int low = 1;
    int high = stalls[n-1] - stalls[0];
    int ans = 0;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(canPlace(stalls, n, c, mid)) {
            ans = mid;      // possible → try bigger distance
            low = mid + 1;
        } else {
            high = mid - 1; // not possible → reduce distance
        }
    }

    cout << ans;
    return 0;
}