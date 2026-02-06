#include<iostream>
#include<cmath>
using namespace std;
int Inverse(int N){

	int pos=1;   //start from left to right ie if n=12435 for 5->1 ,3->2, 4->3, 2->4, 1->5;
	int res=0;

	while(N>0){
		int digit = N%10;

        res += pos*pow(10,digit-1);   //Universal formula
		N /= 10;
		pos++;
	}
	return res;
}
int main() {
	int val;
	cin>>val;

    cout<<Inverse(val);
    return 0;   
}