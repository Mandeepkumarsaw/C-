#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

     //helper fun of main func
	int TrapWater(vector<int> height,int n){
	int l = 0;
	int r = n-1;
	int lmax = 0;
	int rmax = 0;
	int ans = 0;

	while(l < r){
		lmax = max(lmax,height[l]);
		rmax = max(rmax,height[r]);

		if(lmax < rmax){
			ans += lmax - height[l];
			l++;
		} else {
			ans += rmax - height[r];
			r--;
		}
	}

	return ans;
   }	

  
   //main func
    void TillQ(int Q){
   	vector<int> arr;
   
   	while(Q > 0){
   		int N;
   		cin>>N;
   
          for(int i=0;i<N;i++){
   		      int X;
   		      cin>>X;

   		      arr.push_back(X);
   	        } cout<<endl;	
   
            cout<<TrapWater(arr,arr.size());
   
   	   arr.clear();
   	   Q--;
   	}
   
   }
};




int main() {
	Solution obj;
	int Q;
	cin>>Q;

	obj.TillQ(Q);
	return 0;
}


// Sample Input
// 2
// 6
// 3  0  0  2  0  4
// 12
// 0  1  0  2  1  0  1  3  2  1  2  1
// Sample Output
// 10
// 6