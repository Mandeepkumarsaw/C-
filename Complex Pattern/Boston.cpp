#include<iostream>   //edge case N1=22  sumofdig=2+2   sumPn=2+11 but it should 2+1+1=4 
using namespace std;

int sumofdigit(int n){
	if(n<10) return n;
	int temp=n;
	int sum=0;
	while(temp>0){
		int last = temp%10;
        sum += last;
		temp /= 10;
	}
	return sum;
}

// bool isprime(int n){         //boston || smith num are never a prime num 
// 	if(n<=1) return false;
// 	if(n==2) return true;

// 	for(int i=3;i*i<=n;i++){
// 		if(n%i==0) {
// 			return false;
// 			break;
// 		}
// 	}
// 	return true;
// }


int sumPn(int n){
	if(n==1 || n==2 ) return n;
	int sumofpf=0;
	int temp=n;
	while(temp%2==0){
		sumofpf += 2;
		temp /= sumofdigit(2);
	}

	for(int i=3;i*i<=temp;i++){
        while(temp%i==0){
			sumofpf += sumofdigit(i);
			temp /= i;
		}
	}

	if(temp>1) sumofpf += sumofdigit(temp);

   return sumofpf;
}

int main() {
	int N1;
	cin>>N1;

	// if(isprime(N1)) {   //if it's prime then return 0 bcoz boston is a composite num
	// 	cout<<0;   
	// 	return 0;
	// 	}

	int res = sumofdigit(N1);
	int res2 = sumPn(N1);

	cout<<((res == res2) ? 1 : 0);

	

	return 0;
}