#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void inverseArr(int arr[],int res[],int idx,int size){
  if(idx == size) return;
  res[arr[idx]] = idx;
  inverseArr(arr,res,idx+1,size);
}	

void printArr(int nums[], int size) {
		for(int i=0;i<size;i++){
			cout<<nums[i]<<" ";
		}cout<<endl;
	}




int main() {
	int N;
	cin>>N;
    int arr[N],res[N];
  
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
 
   inverseArr(arr,res,0,N);
   printArr(res, N);

   return 0;
}


// Sample Input
// 5
// 0 2 4 1 3
// Sample Output
// 0 3 1 4 2