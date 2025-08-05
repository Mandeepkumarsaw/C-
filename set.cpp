#include <bits/stdc++.h>  
using namespace std;
#include<set>

int main(){
     set<int> s;

     s.insert(1);
     s.insert(2);
     s.insert(3);
     s.insert(4);
    //  s.insert("manu",5);   use pair for store both str & int ----> set<pair<string,int>> s;

     cout<<s.size()<<endl;
     s.insert(5);  //duplicate so set ignre and size remain 5.


     for(auto val : s){
        cout<<val<<" ";
     }
     cout<<endl;

    




     set<int> s2 = {10, 20, 30, 40, 50};

//LOWER BOUND
    auto it = s2.lower_bound(25);   //if x is present then return but if doesn't return the ele just after x , here 30
     cout<<*it<<endl;
    auto it2 = s2.lower_bound(80);  //gives iterator of s.end(),here it is 5 or sometimes 0.
     cout<<*it2<<endl;

//UPPER BOUND
   auto it3=s2.upper_bound(20);  //gives just nxt ele present after x=20, here 30
   cout<<*it3<<endl;
   auto it4=s2.upper_bound(50);  //gives  iterator of s.end(),here it's 5.
   

     return 0;
}