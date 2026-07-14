class Solution {
public:
    int search(vector<int>& nums, int target) {
    int right = nums.size()-1;
    int left = 0;    
    int mid = (right+left)/2;
    if (nums[right] == target)
    {
        return right;
    }
    else if (nums[left] == target)
    {
        return left;
    }        
    else if (nums[mid] == target)
    {
        return mid;
    }

    if (nums[left] < nums[right])
    {
        while(right - left > 1)
        {
            if (nums[mid] < target)
            {
                left = mid;
                mid = (left+right)/2;
            }
            else if (nums[mid] > target)
            {
                right = mid;
                mid = (left + right)/2;
            }
            else if (nums[mid] == target)
            {   
                return mid;
            }
            else if (nums[right] == target)
            {
                return right;
            }
            else if (nums[left] == target)
            {
                return left;
            }
        }
    } 
    else
    {
        while(right-left > 1)
        {
            if (nums[left] < nums[mid])
            {
                if (nums[left] < target && target < nums[mid])
                {
                    right = mid;
                    mid = (right + left) /2;
                }
                else
                {
                    left = mid;
                    mid = (right + left) /2;
                }
            }
        
            else
            {
                if (nums[mid] < target && target < nums[left])
                {
                    left = mid;
                    mid = (right + left)/2;
                }
                else
                {
                    right = mid;
                    mid = (right + left)/2;
                }
            }
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[right] == target)
            {
                return right;
            }
            else if (nums[left] == target)
            {
                return left;
            }

        }
    }
    return -1;
    }
    
};
