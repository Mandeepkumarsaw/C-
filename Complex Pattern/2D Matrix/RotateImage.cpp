#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
      vector<vector<int>> Rotate90(vector<vector<int>> matrix){

      return matrix;
	  }

};

int main() {
    int m;
    cin >> m;
	int n = m;

    vector<vector<int>> matrix(m, vector<int>(n));

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    Solution obj;
    vector<vector<int>> res = obj.Rotate90(matrix);

    for(int i=n-1;i>=0;i--){
		for(int j=0;j<m;j++){
           cout<<res[j][i]<<" ";
		}cout<<endl;
	}

    return 0;
}


// Sample Input
// 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// Sample Output
// 4 8 12 16 
// 3 7 11 15 
// 2 6 10 14 
// 1 5 9 13 
// Explanation
// Rotate the array 90 degrees anticlockwise.