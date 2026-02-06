#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

string chewbacca(string n) {
   
   for(int i=0;i<n.size();i++){
	   int d = n[i] - '0';
       int invert = 9-d;

	   if(i==0 && d==9){
		   continue;
	   }
                     //int  int---->char
	   n[i] = char(min(d,invert) + '0');
    }

	return n;
}


int main() {
	string n;
	cin>>n;

	string res = chewbacca(n);
	cout<<res;

	return 0;
}