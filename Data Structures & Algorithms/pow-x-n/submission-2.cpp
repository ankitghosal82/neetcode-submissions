class Solution {
public:
    double myPow(double x, int n) {
        double t=1;
        bool b=true;
        if(n<0)
        {
            n=-n;
            b=false;
        }
        for(int i=1;i<=n;i++)
        {
            t*=x;
        }
        if(!b)
        {
            t=1/t;
        }
        return t;
    }
};
