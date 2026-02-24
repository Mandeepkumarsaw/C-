#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
	bool sort;

	for(int i=0;i<n-1;i++){
		sort = false;
		for(int j=0;j<n-1;j++){
			if(arr[j] > arr[j+1]) {
				swap(arr[j],arr[j+1]);
				sort = true;
			}
		}
		if(!sort) break;
	}

}

void printArr(int arr[],int size){

	for(int i=0;i<size;i++){
		cout<<arr[i]<<"\n";
	}cout<<endl;
}

int main() {
	int N;
	cin>>N;

	int arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}

	bubbleSort(arr,N);
	printArr(arr,N);
	return 0;
}



// Sample Input
// 4
// 2
// -18
// 45
// 30
// Sample Output
// -18
// 2
// 30
// 45
// Explanation
// For each test case write bubble sorting program to sort the elements of the array.