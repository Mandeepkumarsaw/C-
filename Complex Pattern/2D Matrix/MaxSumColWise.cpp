#include<bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin>>n;

	vector<vector<int>> matrix(n, vector<int> (n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>matrix[i][j];
		}
	}


	
	int Tmax = INT_MIN;
	int idx = -1;

	for(int col=0;col<n;col++){
		int currSum = 0;
		for(int row=0;row<n;row++){
			 currSum += matrix[row][col];
		}
		 if(currSum > Tmax){
			 Tmax = currSum;
			 idx = col + 1;
		 }
	}
	cout<<idx<<" "<<Tmax;

	return 0;
}