class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    int n = nums.size() - 1;
    int first_pointer = 0;
    int sec_pointer = 1;
    int count = 0;
    while(first_pointer < n)
    {
        while (sec_pointer <= n)
        {
            if (nums[first_pointer] == nums[sec_pointer])
            {
                count ++;
            }
            sec_pointer ++;
        }
        first_pointer++;
        sec_pointer = first_pointer + 1;
    }
    return count;


        
    }
};