#include<iostream>
using namespace std;

int rev(int n){
    int rev = 0;

	while(n>0){
		int last = n%10;
		rev =rev*10+last;
		n /= 10;
	}

	return rev;
}


int main() {
	int n;
	cin>>n;

    cout<<rev(n);
	return 0;
}