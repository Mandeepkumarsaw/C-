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

	bool isLTriangle = true;

	//check
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(matrix[i][j] != 0){
				isLTriangle = false;
				break;
			}
		}
		if(!isLTriangle) break;
	}

	cout<< (isLTriangle ? "true" : "false");

	return 0;
}