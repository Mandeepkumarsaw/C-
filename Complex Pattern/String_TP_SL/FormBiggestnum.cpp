#include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
    return a + b > b + a;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<string> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end(), cmp);

        if(arr[0] == "0"){
            cout << 0 << endl;
            continue;
        }

        for(string s : arr){
            cout << s;
        }
        cout << endl;
    }

    return 0;
}

/*
Sample Input
1
4
54 546 548 60
Sample Output
6054854654
Explanation
Upon rearranging the elements of the array , 6054854654 is the largest possible number that can be generated.
*/