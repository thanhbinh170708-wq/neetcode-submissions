class Solution {
public:
    int findMin(vector<int> &nums) {
    int left = 0;
    int right = nums.size()-1;
    int mid = (left + right)/2;
    if (nums[left] < nums[right])
    {
        return nums[left];
    }
    while(right - left > 1)
    {
        if(nums[left] < nums[mid])
        {
            left = mid;
            mid = (left + right)/2;
        }
        else
        {
            right = mid;
            mid = (left+right)/2;
        }
    }
    return min(nums[left],nums[right]);
    }
};
