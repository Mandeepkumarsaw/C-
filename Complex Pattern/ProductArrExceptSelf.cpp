#include<bits/stdc++.h>
using namespace std;

vector<long long> productMul(vector<long long> nums,int n){
   vector<long long> res(n,1);

   //prefix
   long long prefix = 1;
   for(int i=0;i<n;i++){
       res[i] = prefix;
       prefix = prefix*nums[i];
   }

   //suffix
   long long suffix  = 1;
   for(int j=n-1;j>=0;j--){
       res[j] = res[j]*suffix;
       suffix = suffix*nums[j];;
   }

   return res;
}

void printArr(vector<long long> res){
    // int n = res.size();
    for(long long ele : res){
        cout<<ele<<" ";
    }cout<<endl;
}

int main(){
    int N;
    cin>>N;

    vector<long long> arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
        // arr.push_back(X);
    }

    vector<long long> ans = productMul(arr,N);
    printArr(ans);
    return 0;
}



// Print output array


// Sample Input
// 4
// 1 2 3 4
// Sample Output
// 24 12 8 6 