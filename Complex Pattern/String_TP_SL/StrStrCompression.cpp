#include<bits/stdc++.h>
using namespace std;

vector<string> helper(string &s){
	vector<string> res;
    int l=0;

	while(l<s.size()){
		char ch = s[l];
		int count = 0;
		while(l<s.size() && s[l] == ch){
			count++;
			l++;
		}
		if(count > 1){
           res.push_back(string(1,ch)+to_string(count));
		}else{
			res.push_back(string(1,ch));
		}
		
	}
	return res;
}

int main() {
	string s;
	cin>>s;

	vector<string> ans = helper(s);
	for(auto &ele:ans){
		cout<<ele;
	}
	return 0;
}
/*
The compressed String.


Sample Input
aaabbccds
Sample Output
a3b2c2ds
Explanation
In the given sample test case 'a' is repeated 3 times consecutively, 'b' is repeated twice, 'c' is repeated twice. But, 'd' and 's' occurred only once that's why we do not write their occurrence.
*/