#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int numsSum = nums[0];
        int TillMax = nums[0];

        for(int i=1;i<nums.size();i++) {
             numsSum = max(nums[i],numsSum+nums[i]);
             TillMax =  max(TillMax,numsSum);
        }
        return TillMax;
    }

int minSubArray(vector<int>& nums) {
        int numsSum = nums[0];
        int TillMin = nums[0];

        for(int i=1;i<nums.size();i++) {
             numsSum = min(nums[i],numsSum+nums[i]);
             TillMin =  min(TillMin,numsSum);
        }
        return TillMin;
    }	

int main() {
	int q;
	cin>>q;

    while(q--){
        int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++){
	    	cin>>arr[i];
	    }
		int Tsum = accumulate(arr.begin(),arr.end(),0);

        int Minval = minSubArray(arr);
        int MaxVal = maxSubArray(arr);
    
	    if(MaxVal < 0)
            cout << MaxVal << endl;
        else
            cout << max(MaxVal, Tsum - Minval) << endl;
	}
	
	return 0;
}





















int stIdx(vector<int>& arr,int n){
	for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
		   if(arr[i]>0 && arr[j]>0){
			   return i;
		   }
	   }

	}
    return -1;
}

int maxSum(vector<int> nums,int idx){
 if(idx == -1) return 0;

 int n =nums.size();	
 int sum = 0;
 
   for(int i=idx;i<n-1;i++){
	   if(i == n-1){
		  sum += nums[(i + 1) % n];  
	   }else{
          sum  += nums[i];
	   }

   }
   return sum;
}




// 📌 Maximum Circular Subarray Sum – Point Wise Description

// We are given a circular integer array and need to find the maximum possible sum of a non-empty subarray.

// Since the array is circular, the maximum subarray can be of two types:

// Non-circular subarray (normal case)

// Circular subarray (wraps from end to beginning)

// To solve this, we used Kadane’s Algorithm:

// First, to find the maximum subarray sum (normal case).

// Second, to find the minimum subarray sum.

// We calculated the total sum of the array.

// For the circular case, we used the formula:

// Circular Sum = Total Sum − Minimum Subarray Sum

// Final answer is:

// If all elements are negative → return maximum subarray sum.

// Otherwise → return

// max(Max Subarray Sum, Circular Sum)

// The overall time complexity is O(n) per test case.


// Sample Input
// 1
// 7
// 8 -8 9 -9 10 -11 12
// Sample Output
// 22
// Explanation
// Maximum Circular Sum = 22 (12 + 8 - 8 + 9 - 9 + 10)