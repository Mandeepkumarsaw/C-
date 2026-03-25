#include<bits/stdc++.h>
using namespace std;

int maxEle(int arr[],int size){
	int currMax = arr[0];
	for(int i=0;i<size;i++){
		currMax = max(arr[i],currMax);
	}
	return currMax;
}

int main() {
	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}

	cout<<maxEle(arr,N);
	return 0;
}

// Sample Input
// 4
// 2
// 8
// 6
// 4
// Sample Output
// 8