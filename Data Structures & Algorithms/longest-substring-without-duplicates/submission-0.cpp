class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int l=0;
        int r=0;
        int m=0;
        while(r<s.length())
        {
            char c=s[r];
            if(st.find(c)!=st.end())
            {
                st.erase(s[l]);
                l++;
            }
            else{
                st.insert(c);
                r++;
                m=max(m,r-l);
            }
        }
        return m;
    }
};
