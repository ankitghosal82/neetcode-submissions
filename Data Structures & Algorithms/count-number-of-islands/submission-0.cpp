class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int x=0;
        int dir[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    x++;
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    grid[i][j]='0';
                    while(!q.empty())
                    {
                        auto [x,y]=q.front();
                        q.pop();
                        for(auto &d:dir)
                        {
                            int nx=x+d[0];
                            int ny=y+d[1];
                            if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == '1') {
                            {
                                grid[nx][ny] ='0';
                                q.push({nx,ny});
                            }
                        }
                    }
                    }
                }
            }
        }
        return x;
    }
};
