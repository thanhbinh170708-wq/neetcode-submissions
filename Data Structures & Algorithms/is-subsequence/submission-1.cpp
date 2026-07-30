class Solution {
public:
    bool isSubsequence(string s, string t) {
    if (s.size() > t.size() ||  t.size() == 0)
    {
        return false;
    }
    else
    {
        int count_T = 0;
        int count_S = 0;
        while(count_T < t.size())
        {
            if(t[count_T] == s[count_S] )
            {
                count_S++;
            }
            count_T++;
            if (count_S == s.size())
                return true;
            
        }
        return false;
    }
    }
};