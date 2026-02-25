#include<bits/stdc++.h>
using namespace std;

void b2d(string s){
    int sum = 0;
	for(int i=0;i<s.size();i++){
		if(s[s.size()-1-i] == '1'){
            sum += (1<<i);
		 // sum += pow(2,i);
		}
	}

	cout<<sum<<endl;
}

int main() {
	int T;
	cin>>T;
     

	while(T--){
     string s;		
     cin>>s;
     b2d(s);
	} 
	
	return 0;
}

// We use a string instead of an int for binary input because of two important reasons:
// - Leading zeros matter:
// If you read 000111 as an integer, it becomes 111 (leading zeros are dropped). But in binary, those zeros are part of the representation, so treating it as a string preserves them.
// - Safe handling of digits:
// With a string, you can directly check each character ('0' or '1') and decide whether to add the corresponding power of 2. If you use an integer, you’d have to repeatedly do %10 and /10, which is less intuitive and can cause mistakes.
