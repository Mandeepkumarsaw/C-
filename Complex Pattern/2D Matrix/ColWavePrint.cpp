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

	//print
	for(int col=0;col<n;col++){
		if(col % 2 == 0){
			for(int j=0;j<m;j++){
				cout<<matrix[j][col]<<", ";
			}
		}else {
			for(int i=m-1;i>=0;i--){
				cout<<matrix[i][col]<<", ";
			}
		}
	}cout<<"END";
	return 0;
}



// 4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44
// Sample Output
// 11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14, END