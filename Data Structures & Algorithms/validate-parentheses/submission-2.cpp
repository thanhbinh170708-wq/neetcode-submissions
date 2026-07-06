class Solution {
public:
    bool isValid(string s) {
    vector<char> bracket;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{' )
        {
            bracket.push_back(s[i]);
        }
        else if (s[i] == ')')
        {
            if (bracket.size() == 0 || bracket.back() != '(' )
            {
                return false;
            }
            else 
            {
                bracket.pop_back();
            }
        }
        else if (s[i] == ']')
        {
            if (bracket.size() == 0 || bracket.back() != '[' )
            {
                return false;
            }
            else 
            {
                bracket.pop_back();
            }
        }
        else if (s[i] == '}')
        {
            if (bracket.size() == 0 || bracket.back() != '{')
            {
                return false;
            }
            else 
            {
                bracket.pop_back();
            }
        }
    }
    if (bracket.size() == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    }
};
