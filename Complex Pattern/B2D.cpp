#include<iostream>
#include<cmath>
using namespace std;

int b2d(int n){
	if(n==0) return 0;

    int sum =0;
	int i=0;
    while(n>0){
		int last = n%10;
        sum += last*pow(2,i);
		i++;
		n /= 10;
	}

	return sum;
}

int main() {
	int n;
	cin>>n;

	cout<<b2d(n);
	return 0;
}