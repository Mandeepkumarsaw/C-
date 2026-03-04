#include<bits/stdc++.h>
using namespace std;

int linearS(int arr[],int n,int target){
	for(int i=0;i<n;i++){
		if(arr[i] == target) return i;
	}
	return -1;
}

int main() {
	int N,M;
	cin>>N;
	int arr[N];

	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
    cin>>M;   //Target Value

	cout<<linearS(arr,N,M);

	return 0;
}


// Sample Input
// 5
// 2
// 4
// 6
// 9
// 17
// 17
// Sample Output
// 4