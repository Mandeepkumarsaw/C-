#include<bits/stdc++.h>
using namespace std;

void majEle(vector<int> arr,int n){
   unordered_map<int, int> freq;

   //Count freq
   for(int i=0;i<n;i++){
	   freq[arr[i]]++;
   }

   //Find majority
   for(auto it : freq){
	   if(it.second > n/2){
		   cout<<it.first;
	   }cout<<endl;
   }
}

int main () {
	int N;
	cin>>N;

	vector<int> arr(N);
	for(int i=0;i<N;i++){
		cin>>arr[i];
		// arr.push_back(X);
	}

	majEle(arr,arr.size());
	return 0;
}


// Sample Input
// 3
// 1 1 2
// Sample Output
// 1
// Explanation
// Number of 1's in the array is more than 3/2 , Hence majority element is 1