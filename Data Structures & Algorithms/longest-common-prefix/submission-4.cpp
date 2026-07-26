class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    {
        string s;
        int dem = 0;
        if (strs.size() == 1)
        {
            return strs[0];
        }
        while(true){
        for (int i = 1; i < strs.size();i++)
        {
            if(dem < strs[i].size() && dem < strs[0].size() && strs[i][dem] == strs[0][dem])
            {
                if (s.size() == dem)
                {
                    s += strs[0][dem];
                }
            }
            else
            {
                if (s.size() > dem)
                {
                    s.erase(s.size()-1);
                }
                return s; 
            }
            
        }
        dem++;
        }
    }
    }
};