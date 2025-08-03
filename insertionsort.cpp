#include <bits/stdc++.h>    
using namespace std;

class insertionsort {
    public:

    void insertSort(vector<int>& nums,int n){     //O(n^2)
        for(int i=1;i<n;i++){
            int prev = i-1;
            int curr = nums[i];

            while (prev >= 0 && nums[prev] > curr ){            //*desc order--nums[prev] < curr
              nums[prev + 1] = nums[prev];
              prev--;
            }
       

            nums[prev + 1] =  curr ;
           
            
        }

    }

   void printArray(vector<int> nums,int n){
    cout<<"The new sorted array : ";
    for(int val : nums){
        cout<<val;
    }
    cout<<endl;
   }

};

int main(){
    insertionsort obj;
    vector<int> nums = {4,1,5,2,3};
    int n =5;

    obj.insertSort(nums,n);
    obj.printArray(nums,n);
    return 0;
}