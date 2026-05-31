class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int time=0;
        int fresh=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    fresh++;
                }
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        while(fresh>0 && !q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                int r=q.front().first;
                int c=q.front().second;
                q.pop();
                for(int k=0;k<4;k++)
                {
                    int nr=r+dir[k][0];
                    int nc=c+dir[k][1];
                    if(nr>=0 && nc>=0 && nr<n && nc<m && grid[nr][nc]==1)
                    {
                        fresh--;
                        grid[nr][nc]=2;
                        q.push({nr,nc});
                    }
                }
            }
            time++;
        }
        if(fresh==0)
        {
            return time;
        }
        return -1;
    }
};
