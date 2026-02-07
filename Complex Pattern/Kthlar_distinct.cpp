#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();


        int prevMax=INT_MAX;
        int currMax=INT_MIN;

        for(int step=1;step<=k;step++){
            currMax = INT_MIN;

            for(int i=0;i<n;i++){
                if(nums[i]>currMax && nums[i]<prevMax){
                    currMax = nums[i]; 
                }
                
            }

            prevMax = currMax;
        }
        return prevMax;
    }
};

int main() {
    vector<int> arr = {3,2,1,5,6,6,4};
    int k=2;

    Solution obj;
    cout<<obj.findKthLargest(arr,k);  // O/P--> 5 ,here duplicate alowed
    return 0;
}