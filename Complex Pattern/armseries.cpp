#include<iostream>
#include<cmath>
using namespace std;

int digcount(int n){
	int temp=n;
	int digit=0;

	while(temp>0){
		digit++;
		temp /= 10;
	}
	return digit;
}


void sumDigit(int n,int d){
    int temp=n;
	int sum = 0;
	while(temp>0){
		int last = temp%10;
		sum += pow(last,d);
		temp /= 10;

	}
	if(sum==n)  cout<<n<<"\n";
		
}

int main() {
	int ll;
	int ul;
	cin>>ll>>ul;


	for(int i=ll;i<=ul;i++){
		int d = digcount(i);
		sumDigit(i,d);
	}


	return 0;
}