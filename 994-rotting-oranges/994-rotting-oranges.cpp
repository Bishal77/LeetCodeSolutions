class Solution {
public:
    vector<vector<int>>v{{0 , 1} , {0 , -1} , {1 , 0} , {-1 , 0}};
int orangesRotting(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    queue<pair<int , int>>q;
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            if(grid[i][j] == 2){
                q.push({i , j});
            }
        }
    }
    int ones = 0;
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j< n ; j++){
            if(grid[i][j] == 1)ones++;
        }
    }
    if(!ones)return 0;
    int ans = 0;
    while(!q.empty()){
        int nn = q.size();
        while(nn--){
            auto temp = q.front();
            q.pop();
            for(int i=0 ; i<v.size() ; i++){
                int first = temp.first + v[i][0];
                int second = temp.second + v[i][1];
                if(first < 0 or second < 0 or first >= m or second >= n or grid[first][second] != 1){
                    continue;
                }else{
                    ones--;
                    grid[first][second] = 2;
                    q.push({first , second});
                }
            }
        }
        ans++;
        if(!ones)return ans;
    }
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            if(grid[i][j] == 1)return -1;
        }
    }
    return ans - 1;
}
};