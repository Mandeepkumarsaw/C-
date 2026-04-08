#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int BinaryS(vector<vector<int>> matrix,int target){
		int m = matrix.size(); 
		int n = matrix[0].size(); 

        // int left = 0, right = m*n - 1;       
		// while(left <= right){
		// 	int mid = left + (right - left)/2;
		// 	int row = mid/n;
		// 	int col = mid%n;
		// 	if(matrix[row][col] == target) return 1;
		// 	else if(matrix[row][col] < target) left = mid+1;
		// 	else 
		// 	  right = mid - 1;
		// }

		int row = 0, col = n-1;
		while(row < m && col >=0){
			if(matrix[row][col] == target) return 1;
			else if(matrix[row][col] > target) col--;
			else  row++;
			    
		}
		return 0;
         
	}	
};

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

	int x;
	cin>>x;

    Solution obj;
   cout<<obj.BinaryS(matrix,x);


    return 0;
}



// Print 1 if the element is present in the matrix, else 0.

// Sample Input
// 3 3
// 3 30 38
// 44 52 54
// 57 60 69
// 62
// Sample Output
// 0