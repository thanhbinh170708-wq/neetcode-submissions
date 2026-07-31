class Solution {
public:
    int lengthOfLastWord(string s) {
    int cur = s.size()-1;
    int ans = 0;
    while(cur >= 0)
    {
        if (s[cur] != ' ')
        {
            ans ++;
        }
        else if (ans != 0)
        {
            return ans;
        }
        cur --;
    }
    return ans;
    }
};