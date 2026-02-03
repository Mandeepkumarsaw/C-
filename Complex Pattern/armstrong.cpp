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


bool sumDigit(int n,int d){
    int temp=n;
	int sum = 0;
	while(temp>0){
		int last = temp%10;
		sum += pow(last,d);
		temp /= 10;
	}

	return sum==n;
}

int main() {
	int n;
	cin>>n;

	int d = digcount(n);
	cout<<(sumDigit(n,d) ? "Armstrong" : "Not Armstrong");
	return 0;
}