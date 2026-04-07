#include<bits/stdc++.h>
using namespace std;

int main () {
	int m,n;
	cin>>m>>n;

	vector<vector<int>> matrix(m,vector<int> (n));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>matrix[i][j];
		}
	}


	//sort & print
	for(int i=0;i<m;i++){
		sort(matrix[i].begin(),matrix[i].end());
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<matrix[i][j]<<" ";
		}cout<<endl;
	}

	
	return 0;
}



// Sample Input
// 4 5
// 13 5 13 9 11 
// 5 10 11 4 6 
// 6 10 17 12 16 
// 8 11 7 18 5 
// Sample Output
// 5 9 11 13 13 
// 4 5 6 10 11 
// 6 10 12 16 17 
// 5 7 8 11 18 