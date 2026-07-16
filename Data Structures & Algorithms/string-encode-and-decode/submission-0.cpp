class Solution {
public:

    string encode(vector<string>& strs) {
    string s="TinaYuling";

    for (int i = 0;i < strs.size();i++)
    {
        s += strs[i] + "TinaYuling"; 
    }    
        
    return s;
    }

    vector<string> decode(string s) {
    int i = 0;
    string tempans;
    vector<string> ans;
    vector<string> temp;
    while(i < s.size())
    {
        tempans += s[i];
        temp.push_back(tempans);
        if(tempans.size() >= 10)
        {
            int n = tempans.size();
            int j = n-10;
            string s="";
            while(j < n)
                {
                    s +=tempans[j];
                    j++;
                }
            if (s == "TinaYuling")
            {
                temp[i] = "TinaYuling";
                tempans = "";
            }
        }
        if (temp[i] == "TinaYuling")
        {
            tempans = "";
        }
        i++;
    }
    i = 10;
    int n = temp.size();
    while(i < temp.size())
    {
        if (temp[i] == "TinaYuling")
        {
            if (temp[i-10] !="TinaYuling")
                ans.push_back(temp[i-10]);
            else
                ans.push_back("");
        }
        
        i++;
    
    }
    return ans;

    }
};
