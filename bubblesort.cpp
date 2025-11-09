#include <bits/stdc++.h>    
using namespace std;

class bubblesort {
    public:
        void bubbleSort(int arr[],int n){
        for(int i=0;i<n-1;i++){
            bool isSwap = false;                //Optimization---track if the arr is already sorted or not
            for(int j=0;j<n-i-1;j++){  //O(1*n)
                if(arr[j] > arr[j+1]){   //O(n*n)    **for desc order--arr[j] < arr[j+1]
                    swap(arr[j],arr[j+1]);
                    isSwap = true;               //true means it run until lst ele which is i<(n-1) is swap or not 
                }
            }
            if(!isSwap) return;                  //if isSwap become false , then it return
          }
        }    


        void printArray(int arr[],int n) {
        for(int i=0;i<n;i++) {
            cout<<arr[i]<<" ";
          }
          cout << endl;
        }
};


int main() {              //Ovverall TC = O(n^2)
    int arr[] = {4,5,6,7,8,9};
    int n=5;

    bubblesort obj;
    obj.bubbleSort(arr ,n);
    obj.printArray(arr,n);
    return 0;
}
