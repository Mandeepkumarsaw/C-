#include<bits/stdc++.h>
using namespace std;


int main() {
	int M,N;
	cin>>M>>N;

	vector<vector<int>> matrix(M, vector<int>(N));

	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cin>>matrix[i][j];
		}
	}

	//print 2D arr
	for(int i=0;i<M;i++){
		if(i % 2 != 0){
			for(int j=N-1;j>=0;j--){
				cout<<matrix[i][j]<<", ";
			}
		} else {
			for(int j=0;j<N;j++){
				cout<<matrix[i][j]<<", ";
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
// 11, 12, 13, 14, 24, 23, 22, 21, 31, 32, 33, 34, 44, 43, 42, 41, END