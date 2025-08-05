#include <bits/stdc++.h>  
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> mani;

    mani.insert({"tv",100});
    mani.emplace("Watch",100);
    mani.emplace("cellphone",100);

    for(auto p:mani){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}