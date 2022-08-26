/*
GEEKSFORGEEKS QUESTION
a rat is at(0,0) and want to reach (n-1,n-1)
given matrix = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
output-> provide all possible ways rat can reach
ex-> DDRDRR -- one possible solution
1-allowed path(rat 1 to 1 jayga)
0-blocked path
*rat cant move diagonally*
N = 4
m[][] = {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}}
Output:
DDRDRR DRDDRR
Explanation:
The rat can reach the destination at 
(3, 3) from (0, 0) by two paths - DRDDRR 
and DDRDRR, when printed in sorted order 
we get DDRDRR DRDDRR.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    private:
    bool isSafe(vector<vector<int>> &m, int n, vector<vector<int>> visited, int x, int y){
        if(x>=0 && x<n && y>=0 && y<n && visited[x][y]==0 && m[x][y]==1){
            return true;
        }
        return false;
    }
    void solve(vector<vector<int>> &m, int n, string path, vector<string> &ans, vector<vector<int>> visited, int x, int y){
        //base case
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        visited[x][y]=1;
        
        //cases
        //left
        int newx = x;
        int newy = y-1;
        if(isSafe(m,n,visited,newx,newy)){
            path.push_back('L');
            solve(m,n,path,ans,visited,newx,newy);
            path.pop_back();
        }
        //down
        newx = x+1;
        newy = y;
        if(isSafe(m,n,visited,newx,newy)){
            path.push_back('D');
            solve(m,n,path,ans,visited,newx,newy);
            path.pop_back();
        }
        //right
        newx = x;
        newy = y+1;
        if(isSafe(m,n,visited,newx,newy)){
            path.push_back('R');
            solve(m,n,path,ans,visited,newx,newy);
            path.pop_back();
        }
        //up
        newx = x-1;
        newy = y;
        if(isSafe(m,n,visited,newx,newy)){
            path.push_back('U');
            solve(m,n,path,ans,visited,newx,newy);
            path.pop_back();
        }
        visited[x][y]=0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        if(m[0][0]==0){
            return ans;
        }
        int x=0;
        int y=0;
        vector<vector<int>> visited(n, vector<int> (n,0));
        string path = "";
        
        solve(m,n,path,ans,visited,x,y);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}