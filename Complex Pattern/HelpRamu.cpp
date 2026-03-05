#include<bits/stdc++.h>
using namespace std;
int ricksCost(int c1,int c2,int c3,vector<int> Rtimes){
	int temp=0;
	// int res=1;
	for(int ele:Rtimes){
	//    res=1;
       int res = ele*c1; 
	   temp += min(res,c2);
	}
	
	return min(temp,c3);
}

int cabCost(int c1,int c2,int c3,vector<int> Ctimes){
	int temp2=0;
	// int res=1;
	for(int ele : Ctimes){
		// res=1;
		int res = ele*c1;
		temp2 += min(res,c2);
	}
	return min(temp2,c3);
}

int finalCost(int TRc,int TCc,int c4){
    return min(TRc + TCc,c4);
}

int main() {
	int T;
	cin>>T;

	while(T--){
           int c1,c2,c3,c4;
	       cin>>c1>>c2>>c3>>c4;
       
	       int n,m;
	       cin>>n>>m;
       
	       vector<int> Ai(n);
	       for(int i=0;i<n;i++){
	       	cin>>Ai[i];
	       }
           
	       vector<int> Bi(m);
	       for(int j=0;j<m;j++){
	       	cin>>Bi[j];
	       }

		   int v1 = ricksCost(c1,c2,c3,Ai);
		   int v2 = cabCost(c1,c2,c3,Bi);

		   cout<<finalCost(v1,v2,c4);
		   cout<<endl;
	}
	
	return 0;
}


// Sample Input
// 2
// 1 3 7 19
// 2 3
// 2 5
// 4 4 4
// 4 3 2 1
// 1 3
// 798
// 1 2 3
// Sample Output
// 12
// 1