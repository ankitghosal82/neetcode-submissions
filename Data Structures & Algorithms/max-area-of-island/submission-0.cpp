class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int maxm=0;
        int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    int z=1;
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    grid[i][j]=0;
                    while(!q.empty())
                    {
                        int x=q.front().first;
                        int y=q.front().second;
                        q.pop();
                        for(int k=0;k<4;k++)
                        {
                            int nx=x+dir[k][0];
                            int ny=y+dir[k][1];
                            if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]==1)
                            {
                                z++;
                                grid[nx][ny]=0;
                                q.push({nx,ny});
                            }
                        }
                    }
                    maxm=max(maxm,z);
                }
            }
        }
        return maxm;
    }
};
