class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int firstpointer = 0;
    int secpointer = 0;
    int n = nums.size();
    while(true)
    {
        firstpointer++;
        secpointer +=2;
        if (secpointer == firstpointer)
        {
            secpointer ++;
        }
        
        if (secpointer >= n)
        {
            secpointer = secpointer - n;
        }
        if (firstpointer >= n)
        {
            firstpointer = firstpointer - n;
        }
        if (firstpointer != secpointer && nums[firstpointer] == nums[secpointer])
        {
            break;
        }


    }
    return nums[firstpointer];
    }
    
};
