class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    int a1[26] ={};
    int a2[26] ={};
    int n1 = s1.size();   
    int n2 = s2.size();
    string temp;
    if (n1 > n2)
    {   
        return false;
    }
    n1 = s1.size();   
    n2 = s2.size();
    for(int i = 0; i < n1;i++)
    {
        int n = int(s1[i]) - 97;
        a1[n]++;
    }
    int firstpointer = 0;
    int secpointer = 0 + n1 -1;
    for (int i = firstpointer ; i <= secpointer;i++)
    {
        int n = int(s2[i]) - 97;  
        a2[n]++;
    }
    while (secpointer < n2)
    {
        int dem = 0;
        for (int i = 0; i < 26;i++)
        {
            if (a1[i] == a2[i])
            {
                dem ++;
            }
            else
            {
                break;
            }
        }
        if (dem == 26)
        {
            return true;
        }
        else
        {
           a2[int(s2[firstpointer]) - 97] --;
           if (secpointer + 1 < n2) 
           {
               secpointer++;
               a2[int(s2[secpointer]) - 97] ++;    
           } 
           else
           {
            break;
           }
           firstpointer++;
        }
    }
    return false;
    
    }
};
