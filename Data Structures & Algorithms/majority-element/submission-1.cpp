class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int count = 0;
    int candidate = -1000000002;
    for (int i = 0; i< nums.size(); i++)
    {
        if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
            if (count == 0)
            {
                candidate = -1000000002;
            }
            else if(count == -1)
            {
                count = 1;
                candidate = nums[i];
            }

        }
    }
    return candidate;
    }
};