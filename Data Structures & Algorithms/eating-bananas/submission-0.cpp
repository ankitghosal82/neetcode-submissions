class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        int res=r;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            int x=0;
            for(int s:piles)
            {
                if(s%m==0)
                {
                    x+=(s/m);
                }
                else{
                    x+=(s/m)+1;
                }
            }
            if(x<=h)
            {
                res=m;
                r=m-1;

            }
            else{
                l=m+1;
            }

        }
        return res;
    }
};
