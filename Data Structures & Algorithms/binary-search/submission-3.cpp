class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1; 
        int k = (i + j)/2;
        while (true)
        {
            if (nums[k] > target)
            {
                j = k;
                k = (i + k) / 2 ;
            }
            else if (nums[k] < target)  
            {
                i = k ;
                k = (i+j) / 2 ;
            }
            else
            {
                return k;
            }
            if (j - i == 1 || j == i){
                if (nums[j] == target)
                    return j;
                else if (nums[i] == target)
                    return i;
                else  
                    return -1;
            }

        }  
        return -1;

    }
};
