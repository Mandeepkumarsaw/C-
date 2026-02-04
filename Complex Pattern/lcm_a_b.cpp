#include<iostream>
#include<set>
using namespace std;

int lcm(int v1, int v2){
   int a=v1;
   int b=v2;
 

   while(b!=0){
	   int rem = a%b;
	   a=b;
	   b=rem;
   }

   return (v1*v2)/a;
	
}


int main() {
    int N1,N2;
	cin>>N1>>N2;

	cout<<lcm(N1,N2);
	return 0;
}