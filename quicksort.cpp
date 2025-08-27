#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int st , int end) {
    int pivot = arr[end];    //last ko pivot 
    int idx=st-1;            // comparision & swap

  for(int j=st;j<end;j++) {
       if(arr[j] <= pivot){
           idx++;
           swap(arr[j],arr[idx]);
        }   
    }


   idx++;
   swap(arr[end],arr[idx]);                
    
   return idx;                 //return idx of pivot
}

void quicksort(vector<int> &arr,int st,int end){
    if(st<end) {
        int pivot = partition(arr,st,end);

        quicksort(arr,st,pivot-1);   //left half
        quicksort(arr,pivot+1,end);    //right half
    }   
        
}

int main(){
 
   vector<int> arr = {2,4,1,5,3};
   int n = arr.size();
   quicksort(arr, 0, n - 1);

   cout << "Sorted array: ";
   for(const auto& val:arr){
    cout<<val<<" ";
   }
   cout<<endl;

   return 0;
}