#include<iostream>
#include<string>
using namespace std;

void prime(int n,string res){
	if(n<=1) res = "Not Prime";

	if(n==2) {
		 res = "Prime";
	} else{
		bool isPrime = true;
        for(int i=2;i*i<=n;i++){
		if(n%i==0){
			isPrime = false;
			break;
		}
	}

	res = isPrime ? "Prime" : "Not Prime";
}
	cout<<res;
}

int main() {
	int N1;
	cin>>N1;
	
	prime(N1,"");
	return 0;
}