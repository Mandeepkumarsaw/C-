#include <bits/stdc++.h>    
using namespace std;

class selectionsort {
    public:

    void selectionSort(int arr[],int n) {
        for(int i=0; i<n-1; i++){
            int smallIdx = i;
            for(int j=i+1; j<n; j++){
                if(arr[j] < arr[smallIdx])  smallIdx=j;
                } 
              swap(arr[i],arr[smallIdx]);
            }
          
        }

    void printArray(int arr[],int n) {
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
         }
         cout<<endl;
    }
};


int main(){
     int arr[] = {4,5,1,3,2};
     int n=5;
     selectionsort obj;
     obj.selectionSort(arr,n);
     obj.printArray(arr,n);
}