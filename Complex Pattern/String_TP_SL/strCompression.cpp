#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin>>S;

   string res ="";
   int count = 1;

    for(int i=1;i<S.size();i++){
        if(S[i] == S[i-1]){
            count++;
        }else{
             res += S[i-1]; 
             res += to_string(count);
             count = 1;
        }
    }

    res += S.back();
    res += to_string(count);
    
    for(char &ele:res){
        cout<<ele;
    }
   

    return 0;
}



/*The compressed String.
Sample Input
aaabbccdsaa
Sample Output
a3b2c2d1s1a2
Explanation
In the given sample test case 'a' is repeated 3 times consecutively, 'b' is repeated twice, 'c' is repeated twice and 'd and 's' occurred only once.
*/