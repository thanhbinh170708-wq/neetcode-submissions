    int timetoeat(vector<int> piles,int k)
    {
    int n = piles.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (piles[i]+k-1)/k;
    }
    return sum;
    }
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    int n = piles.size();
    int sum = 0;
    int upperbound = 0;
    for (int i = 0; i < n; i++)
    {
        sum += piles[i];
        if (piles[i] > upperbound)
        {
            upperbound = piles[i];
        }
    }
    int lowerbound = sum / h;
    int middlebound = (lowerbound+upperbound) / 2;
    while(true)
    {
    if (middlebound != 0 && timetoeat(piles,middlebound) > h)
    {
        lowerbound = middlebound+1;
        middlebound = (lowerbound + upperbound) /2;
    }
    else
    {
        upperbound = middlebound ;
        middlebound = (lowerbound + upperbound) /2;
    }
    if (upperbound - lowerbound <= 1)
    {
        if (lowerbound != 0 && timetoeat(piles,lowerbound) <= h)
        {
            return lowerbound;
        }
        else 
            return upperbound;
    }
    }

    }
};
