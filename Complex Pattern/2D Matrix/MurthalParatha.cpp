#include <bits/stdc++.h>
using namespace std;

// Function to check if we can make at least P paranthas in given time
bool canCook(vector<int>& cooks, int p, int mid) {
    int total = 0;

    for (int r : cooks) {
        int time = 0;
        int j = 1;

        // count paranthas this cook can make in 'mid' time
        while (true) {
            time += j * r;
            if (time > mid) break;
            total++;
            j++;
        }

        if (total >= p) return true;
    }

    return false;
}

int main() {
    int p, l;
    cin >> p >> l;

    vector<int> cooks(l);
    for (int i = 0; i < l; i++) cin >> cooks[i];

    int low = 0;
    
    // worst case: slowest cook makes all paranthas
    int maxRank = *max_element(cooks.begin(), cooks.end());
    int high = maxRank * (p * (p + 1) / 2);

    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canCook(cooks, p, mid)) {
            ans = mid;
            high = mid - 1;   // try smaller time
        } else {
            low = mid + 1;    // need more time
        }
    }

    cout << ans << endl;

    return 0;
}