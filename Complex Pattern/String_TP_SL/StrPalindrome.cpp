#include<bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin>>S;

     string rev = S;
	 reverse(rev.begin(),rev.end());

	 cout<<(S == rev ? "true" : "false");
	
}