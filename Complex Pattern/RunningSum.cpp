#include <bits/stdc++.h>
using namespace std;

void runSum(int arr[],int res[],int n){
    res[0] = arr[0];
    for (int i = 1; i < n; i++) {
        res[i] = res[i - 1] + arr[i];
    }
}

void printArr(int res[],int n){
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }cout<<endl;
}

int main() {
    int N;
    cin>>N;

    int arr[N];
    for(int i=0;i<N;i++){
         cin>>arr[i];
    }

    int res[N];
    runSum(arr,res,N);
    printArr(res,N);

    return 0;;
}


// Sample Input
// 4
// 1 2 3 4
// Sample Output
// 1 3 6 10
// Explanation
// Running sum is obtained as