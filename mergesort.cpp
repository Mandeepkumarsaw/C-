#include<bits/stdc++.h>
using namespace std;

class mergesol {
    public:
     void merge(vector<int> &arr,int st,int mid,int end) {
        vector<int> temp;
        int i=st;
        int j=mid+1;

        while(i<=mid && j<=end) {   //when sizeof M == sizeof N

            if(arr[i]<=arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else {
                temp.push_back(arr[j]);
                j++;
            }
        }

        while(i<=mid){          //For left half
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=end){          //For right half
            temp.push_back(arr[j]);
            j++;
        }

        for(int idx=0;idx<temp.size();idx++) {    //inserted to arr
            arr[st+idx] = temp[idx];
        }
     }

    void mergesort(vector<int> &arr,int st,int end) {       ///main

       if(st<end) {            //implicit base case ie when st>=end ,it's not runs
         int mid = st+(end-st) / 2;
         //left half
         mergesort(arr,st,mid);
         //right half
         mergesort(arr,mid+1,end);
   
         merge(arr,st,mid,end);
       }

    }

};

int main(){
   mergesol obj;
   vector<int> arr = {4,9,1,7,2};
   int n = arr.size();
   obj.mergesort(arr, 0, n - 1);

   cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    //  cout << "Sorted array: ";
    // for (int num : arr)
    //     cout << num << " ";
    // cout << endl;


  
   return 0;
}