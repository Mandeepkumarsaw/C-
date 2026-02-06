#include<iostream>
using namespace std;

// int Dig_sum(int num){
// 	int sum=0;
// 	while(num>0){
// 	   int last = num % 10;
//        sum += last;
// 	   num /= 10;
// 	}
// 	return sum;
// }

void Delhi(int val){
   int Osum = 0;
   int Esum = 0;

   while(val>0){
	    int dig = val % 10;

		if(dig % 2==0) Esum += dig;
		if(dig % 2!=0) Osum += dig;

		val /= 10;
   }

   if(Osum % 3==0 ||  Esum % 4==0)  {       //OEsum is odd
      cout<<"Yes"<<endl;
   } else {
	   cout<<"No"<<endl;
   }
}

int main() {
	int T;
	cin>>T;

	
   for(int i=1;i<=T;i++){
	   int V_num;
	   cin>>V_num;
	    Delhi(V_num);
   }
	
	return 0;
}