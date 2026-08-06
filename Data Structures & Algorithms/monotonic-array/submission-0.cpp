class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
    if (nums.size() == 1)
    {
        return true;
    }
    else{
    bool check_increase = true;
    bool check_decrease = true;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < nums[i-1])
        {
            check_increase = false;
        }
        else if(nums[i] >nums[i-1])
        {
            check_decrease = false;
        }
        
    }
    return check_increase || check_decrease;

    }
    }
};