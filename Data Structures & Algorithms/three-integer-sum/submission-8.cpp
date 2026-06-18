#include <algorithm>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> pairsolve;
    
    int i = 0;
    int first_pointer = 1;
    int last_pointer = nums.size() - 1;
    if (nums[last_pointer] < 0)
        return pairsolve;
    while(i < nums.size()&& nums[i] <= 0)
    {
        
        while (first_pointer < last_pointer)
        {
            if (i > 0 && nums[i] == nums[i-1])
            {
                break;
            }
            if (nums[first_pointer] + nums[last_pointer] + nums[i] == 0)
            {
                vector<int> a;
                a.push_back(nums[i]);
                a.push_back(nums[first_pointer]);
                a.push_back(nums[last_pointer]);
                
                pairsolve.push_back(a);
                do 
                {
                    first_pointer++;
                }while(first_pointer + 1 < nums.size() && nums[first_pointer-1] == nums[first_pointer]);
                do
                {
                    last_pointer--;
                }
                while(last_pointer -1 > 0 &&nums[last_pointer+1] == nums[last_pointer]);
                
            }
            else if (nums[first_pointer] + nums[last_pointer] + nums[i] > 0)
            {
                last_pointer --;
            }
            else
            {
                first_pointer ++;
            }

        }
        i++;
        first_pointer = i+1;
        last_pointer = nums.size() - 1;
    }
    return pairsolve;
    }
};


