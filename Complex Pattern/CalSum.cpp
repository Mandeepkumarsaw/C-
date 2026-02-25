#include<bits/stdc++.h>
using namespace std;
int CalSum(int arr[],int n,int Q){
 
  while(Q > 0){
	  int NewArr[n];
      int X;    //idx of ele which need to be sum with curr ele
	  cin>>X;

	  for(int i=0;i<n;i++){
		  NewArr[i] = arr[i]+arr[(i-X+n)%n];
	  }

	  //Copy ele (if we use vector then we havn't do this manualy)
	   for(int i=0;i<n;i++){
		   arr[i] = NewArr[i];
	   }

    //    arr = NewArr;    works when use of vector 
	   Q--;
  }
     int Tsum = 0;
      for(int i=0;i<n;i++){
        Tsum += arr[i];
	 }
	return Tsum;
}

int main() {
	int N;
	cin>>N;

	int arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	
	int Q;    ///Run until 2
	cin>>Q;
	
	cout<<CalSum(arr,N,Q);
	return 0;
}


// Output Format
// Your program should output to the standard output stream the sum of the elements of the final array modulus 10^9+7.


// Sample Input
// 5
// 1 2 3 4 5
// 2  Test Case
// 1  idx position in arr to sum with Arr[i] 
// 0  ,again idx position in arr to sum with Arr[i] 
// Sample Output
// 60
// Explanation
// After the 1st operation (X = 1), the array would be [1+5, 2+1, 3+2, 4+3, 5+4] =[6, 3, 5, 7, 9]
// After 2nd operation (X = 0), the array would be [6+6, 3+3, 5+5, 7+7, 9+9] =[12, 6, 10, 14, 18]
// Thus the correct answer would equal to = (12+6+10+14+18) % (10^9+7) = 60