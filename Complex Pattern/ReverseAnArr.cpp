#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
int l=0;
int r=n-1;

while(l < r){
  swap(arr[l++],arr[r--]);	
 }


}

void printArr(int arr[],int n){
	for(int i=0;i<n;i++){
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
	reverse(arr,N);
	
    printArr(arr,N);
	return 0;
}


// Sample Input
// 5
// 0
// 4 
// 6 
// 8 
// 9
// Sample Output
// 9 
// 8 
// 6 
// 4 
// 0 