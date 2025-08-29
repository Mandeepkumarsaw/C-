#include<bits/stdc++.h>
using namespace std;

class ratinmaze {
  public:
   void helper(vector<vector<int>>& mat,int r ,int c,vector<string> &ans,string path,vector<vector<bool>>& visited) {
       int n = mat.size();
    
       
       if(r<0 || c<0 || r>=n || c>=n  || mat[r][c] == 0 || visited[r][c] == true) {     //Base Case
           return;
       }
       
       if(r == n-1 && c == n-1) {   //ans
            ans.push_back(path);
            return;
       }
       
       
       visited[r][c] = true;    //visit
       
       helper(mat,r-1,c,ans,path + "U",visited);  //upward
       helper(mat,r+1,c,ans,path + "D",visited); //downward
       helper(mat,r,c+1,ans,path + "R",visited); //rightside
       helper(mat,r,c-1,ans,path + "L",visited); //leftside
       
       visited[r][c] = false;               //unvisit
       
       
   }
  
    vector<string> ratInMaze(vector<vector<int>>& mat) {
    int n = mat.size();

        vector<string> ans;
        string path = "";
        vector<vector<bool>> visited(n, vector<bool>(n,false));

        helper(mat ,0, 0, ans, path,visited);
        
        sort(ans.begin(),ans.end());
        
        return ans;
        
    }
};

int main(){
    ratinmaze obj;
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 1, 1},
        {0, 1, 0, 1},
        {1, 1, 1, 1}
    };

    vector<string> res = obj.ratInMaze(mat);

    // for(auto& path : res){
    //     for(char cell: path){    //here cell var access same elem as path has so its meaningless so (see bellow another loop)
    //         cout<<cell<<" ";
    //     }
    //     cout<<endl;
    // }

    for (const auto& path : res) {
    cout << path << endl;
   }


    return 0;

}