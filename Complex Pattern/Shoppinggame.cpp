#include<iostream>
using namespace std;

int main() {
	int T;
	cin>>T;

	while(T>0) {
	    int M,N;
	    cin>>M>>N;
	    int Asum = 0;
	    int Hsum = 0;
    
	    int turn=1;

                while(true){
	            	     Asum += turn;
	            	     if(Asum > M) {
	            	     	cout<<"Harshit"<<endl;  
	            	     	break;
	                     } turn++;
                 
	            	     Hsum += turn;
	            	     if(Hsum > N) {
	            	     	cout<<"Aayush"<<endl;
	            	     	break;
	            	     }
	            	     turn++;
	                }
					T--;	
	            }	

	return 0;
}