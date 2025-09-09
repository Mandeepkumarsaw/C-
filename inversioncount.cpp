#include<bits/stdc++.h>
using namespace std;

int merge(vector<int>& arr,int st,int mid,int end) {     //mergesort implementation
    vector<int> temp;
    int i=st;
    int j=mid+1;
    int inverscount = 0;

    while(i <= mid && j <= end) {
        if(arr[i] <= arr[j]){
          temp.push_back(arr[i++]);
        }
        else {
            inverscount += (mid - i) + 1;
            temp.push_back(arr[j++]);
        }
    }

    while(i <= mid){
        temp.push_back(arr[i++]);
    }
    while(j<= end){
        temp.push_back(arr[j++]);
    }
    
    for (int k = 0; k < temp.size(); ++k) {
    arr[st + k] = temp[k];
   }

 return inverscount;
}

int mergesort(vector<int>& arr,int st,int end) {
    if (st >= end) return 0;

   int mid = st+(end-st)/2;

   int leftinversecount = mergesort(arr,st,mid); //left half
   int rightinversecount = mergesort(arr,mid+1,end);  //right half

    int inversecount = merge(arr,st,mid,end);   //overall

    return leftinversecount+rightinversecount+inversecount;
}

int main(){
   vector<int> arr = {4,9,1,7,2};
   int n = arr.size();
   int res = mergesort(arr, 0, n - 1);

   cout<<"Inversion Count: "<<res;
   return 0;
}