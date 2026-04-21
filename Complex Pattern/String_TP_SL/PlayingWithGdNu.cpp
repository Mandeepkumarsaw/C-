#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
	return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}

int helper(string &s){
    int curr = 0;
	int maxLen = 0;

	for(int r=0;r<s.size();r++){
		if(isVowel(s[r])){
			curr++;
			maxLen = max(maxLen,curr);
		}else{
			curr = 0;
		}
	}
	
	return maxLen;
}

int main() {
	string s;
	cin>>s;

	cout<<helper(s);
	return 0;
}

/*
Output Format
A single positive integer N, where N is the length of the longest sub-string of S that is also a Good String. If no valid Good String exists, print 0.


Sample Input
cbaeicde
Sample Output
3
Explanation
Longest good substring is "aei"
*/