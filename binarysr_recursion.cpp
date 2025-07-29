#include <bits/stdc++.h>    
using namespace std;



class binarysearch {
public:

int binarysr_recursion(vector<int> arr,int tar,int st,int end) {
       if(st<=end) {
           int mid = st + (end-st)/2;
        
   
            if(tar > arr[mid]) { //2nd half
                   return binarysr_recursion(arr,tar,mid+1,end);
            } else if (tar < arr[mid]) {  //1st half
                   return binarysr_recursion(arr,tar,st,mid-1);
            } else {    //mid == tar
               return mid;
            }
        }
   
          return -1;
    
    }  
};


int main(){
  
    vector<int> arr = {-1,0,3,5,9,12};  //even
    int tar = 9;
    
    binarysearch bs;
    cout<<" Element is at idx: " <<bs.binarysr_recursion(arr,tar,0,arr.size()-1)<<endl;
    return 0;
}