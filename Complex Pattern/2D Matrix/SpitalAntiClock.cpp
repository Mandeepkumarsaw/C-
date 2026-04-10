#include<bits/stdc++.h>
using namespace std;

int main() {
	int m,n;
	cin>>m>>n;

	vector<vector<int>> matrix(m, vector<int>(n));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>matrix[i][j];
		}
	}

	int top = 0 , bottom = m-1;
	int left = 0, right = n-1;
	while(top<=bottom && left <= right){

		//top to bottom
	  for(int i=top;i<=bottom;i++){
		  cout<<matrix[i][left]<<", ";
	  }left++;

      //left to right
	  if(top<=bottom){
	       for(int j=left;j<=right;j++){
	     	  cout<<matrix[bottom][j]<<", ";
	       }bottom--;
	  }

       //bottom to top
	  if(left <= right){
		  for(int i=bottom;i>=top;i--){
			  cout<<matrix[i][right]<<", ";
		  }right--;
	  }	

	  //right to left
	  if(top <= bottom){
          for(int j=right;j>=left;j--){
			  cout<<matrix[top][j]<<", ";
		  } top++;
	  }

    }

	cout<<"END";
	return 0;
}



//Sample Input
// 4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44
// Sample Output
// 11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 2