#include<bits/stdc++.h>
using namespace std;

bool alexShop(vector<int>& Items,int n,int A, int k){
int count = 0;
	for(int i=0;i<n;i++){
		if(A % Items[i] == 0){
          		  count++;
		}
	}

	 return count >= k;
}

int main() {
	int N;
	cin>>N;
	vector<int> Items(N);
	for(int i=0;i<N;i++){
		cin>>Items[i];
	}

	int Q;
	cin>>Q;
	for(int j=0;j<Q;j++){
		int A,k;
		cin>>A>>k;
		bool ans = alexShop(Items,N,A,k);
		cout<<(ans ? "Yes" : "No")<<endl;
	}
	return 0;
}



// Sample Input
// 4
// 100 200 400 100
// 6
// 100 2
// 200 3
// 500 4
// 600 4
// 800 4
// 1200 1
// Sample Output
// Yes
// Yes
// No
// No
// Yes
// Yes
// Explanation
// In query 1, Alex has 100 units of money. The shopkeeper claims that she can choose to buy from 2 kinds of items i.e. item 1 and item 4 each priced at 100.

// In query 2, The shopkeeper claims that she can choose to buy from 3 kinds of items ie item 1 and item 4 each priced at 100(she can buy 1 from either of the two), or item 2 priced at 200(she can buy one)

// In query 3, she has 500 units of money. She can either buy item 1 or item 4 ( 5 of each kind respectively). Thus, she has only 2 kinds of items to choose from.

// In query 5, she has 800 units of money. She can either buy item 1 or item 4 ( 8 of each kind respectively) or item 2(she can buy 4 of these) or item 3(2 of these). Thus, she has 4 kinds of items to choose from.

// In query 6, she has 1200 units of money. She can either buy item all types of items to use up her money. Thus, she has 4 kinds of items to choose from. As Shopkeeper as at least 1. Shopkeeper is Correct