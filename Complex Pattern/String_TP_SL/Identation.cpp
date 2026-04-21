#include<bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin>>S;

	for(int i=0;i<S.size();i++){
		char ch = S[i];

		if(ch >= 65 && ch <= 90) cout<<endl;
		cout<<S[i]; 
	}
	return 0;
}