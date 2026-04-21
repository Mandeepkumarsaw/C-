#include<bits/stdc++.h>
using namespace std;

long long countSubarrays(vector<int>& arr, long long k){
    if(k <= 1) return 0;

    long long prod = 1;
    int l = 0;
    long long ans = 0;

    for(int r = 0; r < arr.size(); r++){
        prod *= arr[r];

        while(prod >= k){
            prod /= arr[l];
            l++;
        }

        ans += (r - l + 1);
    }

    return ans;
}

int main(){
    int n;
    cin >> n;

    long long k;
    cin >> k;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << countSubarrays(arr, k);

    return 0;
}

/*
Output Format
Print number of possible contiguous subarrays having product less than a given number k.


Sample Input
4 
10
1
2 
3 
4
Sample Output
7
Explanation
The contiguous subarrays are {1}, {2}, {3}, {4} {1, 2}, {1, 2, 3} and {2, 3} whose count is 7.
*/