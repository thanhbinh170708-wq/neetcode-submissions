bool check50(int a[26],int k)
    {
    int max = 0;
    int sum = 0;
    for(int i = 0; i < 26; i++)
    {
        if (max < a[i])
            max = a[i];
        sum += a[i];
    }
    if (sum - max <= k)
        return true;
    else
        return false;
    }
class Solution {
public:
    int characterReplacement(string s, int k) {
    int a[26] ={};
    int n = s.size();   
    int firstpointer = 0;
    int secpointer = 1;
    int maxi = 0;
    int current = 0;
    a[int(s[secpointer])-65]++;
    a[int(s[firstpointer])-65]++;
    while(secpointer < n)
    {
        if (check50(a,k) == true)
        {
            current = secpointer - firstpointer+1;
            if (maxi < current)
                maxi = current;
            secpointer++;
            if (secpointer < n)
            {
            a[int(s[secpointer])-65]++;
            }
        }
        else
        {
            a[int(s[firstpointer])-65]--; 
            firstpointer ++;
        }
    }
    return maxi;
    }
};
