#include <algorithm>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int a[128];
    fill(a,a+128,-1);
    int firstcur = 0;
    int secur = 0;
    int maxi = -100000;
    if (s.size() ==0)
        return 0;
    int dem = 0;
    while (secur < s.size())
    {
        int n = int(s[secur]);
        if (a[n] == -1 || a[n] < firstcur)
        {
            a[n] = secur;
            maxi = max(maxi,secur - firstcur+1);
        }                
        else
        {
                firstcur = a[n] +1;
            
            a[n] = secur;
        } 
        secur ++;     
    }    
    return maxi;
    }
};
