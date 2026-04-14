#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m,k,s;
	cin>>n>>m>>k>>s;

	vector<vector<char>> grid(n, vector<char>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>grid[i][j];
		}
	}

	// int iteration = 0;
    int CurrS = s;

 
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){

				if(grid[i][j] == '#'){
					break;
				}

			
				if(grid[i][j] == '.'){
                      CurrS -= 2;
				}else if(grid[i][j] == '*'){
                      CurrS += 5;
				}

				if(j != m-1) CurrS--;

				if(CurrS < k){
					cout<<"No";
					return 0;
				}
			}
		}
       


	cout<<"Yes"<<endl<<CurrS;

	return 0;
}