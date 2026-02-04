#include<iostream>
#include<unordered_map>
using namespace std;

int dcount(int n,int d){
	if(n<0) n=-n;
	unordered_map<int,int> m;

	while(n>0){
		int last = n%10;
		m[last]++;
		n /=10;
	}

	return m[d];
}



int main() {
	int num,dig;
	cin>>num;
	cin>>dig;

   cout<<dcount(num,dig);

	return 0;
}