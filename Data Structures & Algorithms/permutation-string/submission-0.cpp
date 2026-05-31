class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
        { 
            return false;
        }
        vector<int>freq(26,0);
        vector<int>freqv(26,0);
        for(char t:s1)
        { 
            freq[t-'a']++;
        }
        int l=0;
        int r=0;
        while(r<s2.length())
        { 
            freqv[s2[r]-'a']++;
            if(r - l + 1 > s1.length())
            { 
                freqv[s2[l]-'a']--;
                l++;
            }
            if(freq==freqv)
            { 
                return true;
            }
            r++;
        }
        return false;
    }
};