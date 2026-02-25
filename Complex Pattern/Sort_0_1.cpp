#include<bits/stdc++.h>
using namespace std;

void Sort01(int arr[],int n){
	int i=0;
	int j=n-1;

	while(i<j){
		if(arr[i]== 1 && arr[j]==0){
			swap(arr[i],arr[j]);
			i++;
			j--;
		} else if(arr[i] == 0){
            i++;
		} else {
			j--;
		}
	}
	
}

void PrintArr(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main() {
	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
    Sort01(arr,N);
	PrintArr(arr,N);

	return 0;
}

// Output Format
// Sorted Sequence


// Sample Input
// 7
// 1 0 0 1 1 0 1
// Sample Output
// 0 0 0 1 1 1 1