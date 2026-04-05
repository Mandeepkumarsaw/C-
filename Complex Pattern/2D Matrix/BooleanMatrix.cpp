#include<bits/stdc++.h>
using namespace std;
// int main () {
// 	int m,n;
// 	cin>>m>>n;

// 	vector<vector<int>> matrix(m, vector<int> (n));
// 	for(int i=0;i<m;i++){
// 		for(int j=0;j<n;j++){
// 			cin>>matrix[i][j];
// 		}
// 	}

//     vector<vector<int>> ans(m, vector<int> (n,0));

// 	for(int i=0;i<m;i++){
// 		for(int j=0;j<n;j++){
// 			if(matrix[i][j] == 1){
// 				for(int r=0;r<m;r++){
//                    ans[r][j] = 1;
// 				}
// 				for(int c=0;c<n;c++){
//                    ans[i][c] = 1;
// 				}
                
//             }
// 		}
// 	}

// 	for(int i=0;i<m;i++){
// 		for(int j=0;j<n;j++){
// 			cout<<ans[i][j]<<" ";
// 		}cout<<endl;
// 	}
// 	return 0;
// }


//optimized
int main () {
	int m,n;
	cin>>m>>n;

	vector<vector<int>> matrix(m, vector<int> (n));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>matrix[i][j];
		}
	}

    vector<int> rowtrack(m,0);
    vector<int> coltrack(n,0);

	//first phase
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(matrix[i][j] == 1){
				rowtrack[i] = -1;
				coltrack[j] = -1;
			}
		}
	}

	//2nd phase of Updation
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(rowtrack[i] == -1 || coltrack[j] == -1){
				matrix[i][j] = 1;
			}
		}
	}

	//print
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<matrix[i][j]<<" ";
		}cout<<endl;
	}
	
	return 0;
}	