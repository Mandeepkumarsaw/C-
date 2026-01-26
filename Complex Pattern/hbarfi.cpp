#include<iostream>
using namespace std;

int main(){
    int n=7;

for(int i=1;i<=n;i++){
    if(i==4){
                   cout<<"  ";
         } 
         else {
   
    for(int j=1;j<=n;j++){
         if(j==4){
                   cout<<"  ";
         } else {
                   cout<<"* ";
         }
    }
 }
 cout<<endl;

 }
}