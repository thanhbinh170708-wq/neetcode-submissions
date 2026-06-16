class Solution {
public:
    int a[46] = {0};

    int climbStairs(int n) {
        if (a[n] != 0)
            {
                return a[n];
            }
        
        if (n == 1)
        {
            a[n] = 1;
            return 1;
        }     
        else if (n == 2)
        {
            a[n] = 2;
            return 2;
        }
        else 
        {
            a[n] = climbStairs(n-1) + climbStairs(n-2);
            return a[n];
        }
    }   
};
