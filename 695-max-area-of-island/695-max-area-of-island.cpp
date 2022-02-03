class Solution {
    int dfs(vector<vector<int>>& grid, int i, int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size() || grid[i][j]==0){return 0;}
        grid[i][j]=0;
        int l = dfs(grid,i-1,j);
        int r = dfs(grid,i+1,j);
        int u = dfs(grid,i,j-1);
        int d = dfs(grid,i,j+1);
        return l+r+u+d+1;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int mx=0, ans = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    mx = dfs(grid,i,j);
                    ans = max(ans,mx);
                }
            }
        }
        return ans;
    }
};