class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int wr = 1;
    int cur = 1;
    while(cur < nums.size())
    {
        if (nums[cur] != nums[cur-1])
        {
            nums[wr] = nums[cur];
            wr++;
        }
        cur++;
    }
    while(nums.size() != wr)
        nums.pop_back();
    
    return nums.size();

    }
};