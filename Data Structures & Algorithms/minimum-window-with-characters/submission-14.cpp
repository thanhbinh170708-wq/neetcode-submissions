    bool equal(int s[], int t[])
    {
        for (int i = 0; i < 52; i++)
        {
            if (t[i] != 0 && t[i] > s[i])
                return false; 
        }
        return true;
    }
    int convert_int(char s)
    {
        if (isupper(s))
        {
            return int(s) - 65; 
        }
        else
        {
            return int(s) - 71;
        }
    }
class Solution {
public:
    string minWindow(string s, string t) {
    int s_count[52] ={0};   
    int t_count[52] ={0};
    int first_pointer = 0; int sec_pointer = t.size() -1;
    string ans =  s +"TinaYuling";
    string tempans = "";
    if (t.size() > s.size())
        return "";
    for (int i = 0; i < t.size(); i ++)
    {
        t_count[convert_int(t[i])] ++;
        s_count[convert_int(s[i])] ++;
        tempans += s[i];
    }
    if (equal(s_count,t_count) )
    {
            return tempans;
    }
    while(true)
    {
    if (sec_pointer >= s.size() - 1)
    {
        break;
    }
    while (!equal(s_count,t_count))
    {
        if (equal(s_count,t_count) && ans.size() > tempans.size())
        {
            ans = tempans;
            if (ans.size() == t.size())
            {
                return ans;
            }
        }
        if (sec_pointer + 1 < s.size() )
        {
            sec_pointer++;
            s_count[convert_int(s[sec_pointer])] ++;
            tempans += s[sec_pointer];
        }
        else
            break;

    }
    while( equal(s_count,t_count) && sec_pointer - first_pointer >= t.size()  )
    {   
        if (equal(s_count,t_count) && ans.size() > tempans.size())
        {
            ans = tempans;
            if (ans.size() == t.size())
            {
                return ans;
            }
        }
        s_count[convert_int(s[first_pointer])] --;
        tempans.erase(0,1);
        first_pointer++;
    }
    
    if (equal(s_count,t_count) && ans.size() > tempans.size())
        {
            ans = tempans;
            if (ans.size() == t.size())
            {
                return ans;
            }
        }
    
    
    }
    sec_pointer++;
    s_count[convert_int(s[sec_pointer])] ++;
    tempans += s[sec_pointer];

    if (ans == s + "TinaYuling")
        return "";
    else
    {
        return ans;
    }
    }

};
