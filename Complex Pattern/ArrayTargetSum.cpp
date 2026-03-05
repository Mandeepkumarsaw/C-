#include<bits/stdc++.h>
using namespace std;

void tripletSum(vector<int>& nums,int n,int Target){

      for(int i=0;i<n-2;i++){
		  int l = i+1;
		  int r = n-1;
		  while(l < r){
             int sum = nums[i] + nums[l] + nums[r];
			 if(sum == Target){
				 cout<<nums[i]<<", "<<nums[l]<<" and "<<nums[r]<<endl;
				 l++;
				 r--;
			 } else if(sum < Target){
				 l++;
			 } else{
				 r--;
			 }
		  }
		  

	  }
}

int main() {
	int N;
	cin>>N;

	vector<int> arr(N);
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}

    int Target;
	cin>>Target;

	sort(arr.begin(),arr.end());

	tripletSum(arr,N,Target);

	return 0;
}

// Sample Input
// 9
// 5 7 9 1 2 4 6 8 3
// 10
// Sample Output
// 1, 2 and 7
// 1, 3 and 6
// 1, 4 and 5
// 2, 3 and 5