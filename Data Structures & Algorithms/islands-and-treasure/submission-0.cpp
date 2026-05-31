class Solution {
public:
    void dfs(vector<vector<int>>& grid,int r,int c,int dist)
    {
        int n=grid.size();
        int m=grid[0].size();
        int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        for(int k=0;k<4;k++)
        {
            int nr=r+dir[k][0];
            int nc=c+dir[k][1];
            if(nr>=0 && nc>=0 && nr<n && nc<m && grid[nr][nc] != -1 && grid[nr][nc]>dist+1)
            {
                grid[nr][nc] = dist + 1;
                dfs(grid, nr, nc, dist + 1);
            }
        }
    }
    void islandsAndTreasure(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                {
                    dfs(grid,i,j,0);
                }
            }
        }
    }
};
