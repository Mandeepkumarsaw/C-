#include<iostream>
#include<vector>
using namespace std;

void series(int limit,int d){
   vector<int> arr;
   int st=0;

   for(int i=0;i<limit;i++){
	   st++;
	   int optn = (3*st)+2;
	   if(optn%d == 0){
		   i--;
		 } else {
			 arr.push_back(optn);
		 }
      
	   
   }

   for(int ch : arr){
	   cout<<ch<<"\n";
   }

}

int main() {
	int N1,N2;
	cin>>N1>>N2;
	
	series( N1, N2);
	return 0;
}