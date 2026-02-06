#include<iostream>
#include<cmath>
using namespace std;

int sb2dec(int sb,long long N) {//sb to decimal(acc to Source Base)
  long long temp = N;

  int p=0;
  int dec=0;
  while(temp >0){
     int last = temp%10;
     dec += last * pow(sb,p);    //Main conversion formula
	 p++;
	 temp /= 10;
  }
  return dec;
}

long long dec2Sd(int db,int dec){  //dec to binary(ac to Destination Base)
	long long p = 1;
    long long ans  = 0;

    while(dec>0){
		 int rem = dec%db;
		 ans += rem*p;
		 p = p*10;
		 dec /= db;
	}

	return ans;
}


int main() {
	int sb,db;
	long long SN;

	cin>>sb>>db>>SN;
   
    int F_dec = sb2dec(sb,SN);
	long F_ans = dec2Sd(db,F_dec);

    cout<<F_ans<<endl;
	return 0;
}