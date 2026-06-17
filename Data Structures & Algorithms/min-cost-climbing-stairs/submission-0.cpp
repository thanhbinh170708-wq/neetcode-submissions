class Solution {
    
public:
    int sum[101] = {0} ;
    int solve(vector<int>& cost, int i)
    {
        
        int a = cost.size() - 1;
        if (i == a || i == a-1)
        {
            sum[i] = cost[i];
            return cost[i];
        }
        if (sum[i] == 0) 
        {
            sum[i] = min(solve(cost,i+1),solve(cost,i+2)) + cost[i];
            return min(sum[i+1],sum[i+2]) + cost[i];
        }
        else
        {
            return sum[i];
        }

        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        {
            int i = -1;
            return min(solve(cost,i+1),solve(cost,i+2));
        }
    }
};
