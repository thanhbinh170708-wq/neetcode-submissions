    void swap(int& a, int& b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void MergeSort(vector<int>& nums,int left,int right)
    {
        int mid = (right + left) / 2;
        if (right <= left)
        {
            return;
        }    
        MergeSort(nums,left , mid);
        MergeSort(nums,mid+1, right);
        int pointer = mid + 1;
        int templeft = left;
        vector<int> temp;
        while(true)
        {
            if (nums[left] <= nums[pointer])
            {
                temp.push_back(nums[left]);
                if (left != mid)
                {
                    left++;
                }
                else
                {
                    while(pointer <= right)
                    {
                        temp.push_back(nums[pointer]);
                        pointer++;
                    }
                    break;
                
                }
            }
            else
            {
                temp.push_back(nums[pointer]);
                if (pointer != right)
                {
                    pointer++;
                }
                else
                {
                    while(left <= mid)
                    {
                        temp.push_back(nums[left]);
                        left++;
                    }
                    break;
                }
            }
        }
        for (int i = templeft; i <= right; i++)
        {
            nums[i] = temp[i-templeft];
        }
        

        


    }
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
    
    MergeSort(nums,0,nums.size()-1);
    return nums;
    }
};