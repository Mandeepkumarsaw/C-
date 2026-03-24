#include <bits/stdc++.h>
using namespace std;

void SquareS(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i] = abs(arr[i]);
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        int square = arr[i]*arr[i];
        arr[i]=square;
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main() {
   int N;
   cin>>N;
   int arr[N];
   for(int i=0;i<N;i++){
       cin>>arr[i];
   }
   SquareS(arr,N);
   return 0;
}



// Sample Input
// 5
// -4 -1 0 3 10
// Sample Output
// 0 1 9 16 100