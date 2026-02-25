#include<bits/stdc++.h>
using namespace std;

void pairRose(vector<int> flower,int n,int money){
     sort(flower.begin(),flower.end());
	 int l = 0;
	 int r = n-1;
	 int a = 0;
	 int b = 0;
	 int F_min = INT_MAX;

	 while(l < r){
        int sum = flower[l] + flower[r];
	    if(sum == money){
	          int currdiff = flower[r]-flower[l];
    
	    	  if(currdiff < F_min){
				  F_min = currdiff;
				  a = flower[l];
				  b = flower[r];
			  }
			  l++;
			  r--;
        }else if(sum < money){
			l++;
		}else r--; 
       
	}

	 cout<<"Deepak should buy roses whose prices are "<<a<<" and "<<b<<"."<<endl;


}

int main() {
	int T;
	cin>>T;

	while(T--){
	int N;
	cin>>N;	
    vector<int> arr(N);
	for(int i=0;i<N;i++){
		cin>>arr[i];
	  }

	int M;
	cin>>M;

    pairRose(arr,N,M);

	}

	return 0;
}


// Sample Input
// 2
// 2
// 40 40
// 80

// 5
// 10 2 6 8 4
// 10
// Sample Output
// Deepak should buy roses whose prices are 40 and 40.
// Deepak should buy roses whose prices are 4 and 6.