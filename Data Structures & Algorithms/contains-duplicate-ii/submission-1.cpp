class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    int n = nums.size();
    int first_pointer = 0;
    int sec_pointer = 1;
    while(first_pointer < n-1)
    {
        if (sec_pointer != first_pointer && nums[sec_pointer] == nums[first_pointer])
        {
            return true;
        }
        else if (sec_pointer - first_pointer < k && sec_pointer < n-1)
        {
            sec_pointer++;
        }
        else
        {
            first_pointer++;
        }
    }    
    return false; 
    }
};