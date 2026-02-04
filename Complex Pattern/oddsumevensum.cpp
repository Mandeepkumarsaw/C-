#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
	cin>>n;
	vector<int> arr;
	int osum=0;
	int esum=0;

	while(n>0){
		int last = n%10;
		arr.push_back(last);
		n /= 10;
	}
    
	for(int i=0;i<arr.size();i++){
		if(i%2==0){
			esum += arr[i];
		} else {
			osum += arr[i];
		}
	}

	cout<<esum<<endl;
	cout<<osum;

	return 0;
}