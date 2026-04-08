#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<vector<int>> TransposeM(vector<vector<int>> matrix){
      int m = matrix.size();
	  int n =matrix[0].size();
	  vector<vector<int>> res(m, vector<int> (n));

	  for(int i=0;i<m;i++){
		  for(int j=0;j<n;j++){
            res[j][i] = matrix[i][j];
		  }
	  }
	  return res;
	}	
};

int main() {
    int m;
    cin >> m;
	int n = m;

    vector<vector<int>> matrix(n, vector<int>(m));   //to be note position of m & n in  transpose(reverse of normal matrix)

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    Solution obj;
    vector<vector<int>> res = obj.TransposeM(matrix);

    for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<res[i][j]<<" ";
		}cout<<endl;
	}

    return 0;
}


// 5
// 1 46 4 60 100 
// 28 52 97 80 59 
// 6 33 62 42 12 
// 57 31 56 89 47 
// 1 50 73 53 99 
// Sample Output
// 1 28 6 57 1 
// 46 52 33 31 50 
// 4 97 62 56 73 
// 60 80 42 89 53 
// 100 59 12 47 99 