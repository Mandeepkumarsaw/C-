#include<iostream>
using namespace std;

void rep_0_5(long long n){

    if(n==0) {
		cout<<5;
		return;
		}

	long long ans = 0;	

	while(n>0){
		int last = n%10;

		if(last == 0){
          ans = ans*10 + 5;
		} else {
          ans = ans*10 + last; 
		}

		n /= 10;
	}

	//Correct order
    long long F_ans=0;
       while(ans>0){
	   int rem  = ans%10;
	   F_ans = F_ans * 10 + rem;
	   ans /= 10;
     }

    cout<<F_ans<<endl;

}



int main() {
	long long n;
	cin>>n;

	rep_0_5(n);

	return 0;
}