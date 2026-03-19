#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& A) {
        //FIND pivot
        int pivot = -1 ;
        int n =A.size();

        for(int i =n-2;i>=0 ; i--){
            if(A[i] < A [i+1]){
                pivot = i;
                break;
            }
        }

        if(pivot == -1){
            reverse(A.begin(),A.end());  //in place changes
            return;
        }
        

        //2nd step ; next largest elements
        for(int i =n-1 ; i>pivot ; i--){
            if(A[i] > A[pivot]) {
                swap(A[i], A[pivot]);
                break;
            }
        }

        //3rd step:reverse (piv+1  to n-1);

        int i= pivot+1 , j=n-1;
       while(i <= j){
        swap(A[i++], A[j--]);
       }
        
    }
};


int main() {
	Solution obj;

	int X;
	cin>>X;
	vector<int> arr(X);
	for(int i=0;i<X;i++){
		cin>>arr[i];
	}

	obj.nextPermutation(arr);
	for(int ele : arr){
		cout<<ele<<" ";
	}cout<<endl;

	return 0;
}


// Sample Input
// 3
// 1 2 3
// Sample Output
// 1 3 2
// Explanation
// The next permutation of [1, 2, 3] in lexicographical order is [1, 3, 2].