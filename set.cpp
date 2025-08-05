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

     return 0;
}