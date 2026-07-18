    void swap(int& a, int& b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void MergeSort(vector<int>& nums,int left,int right)
    {
        int mid = (right + left) / 2;
        if (right - left == 1)
        {
            if (nums[right] < nums[left])
                swap(nums[right],nums[left]);
            return;
        }    
        MergeSort(nums,left , mid);
        MergeSort(nums,mid+1, right);
        int pointer = mid + 1;
        while(left <= mid)
        {
        if (nums[left] > nums[pointer])
        {
            swap(nums[left],nums[pointer]);
            left ++;
        }
        else
        {
            right ++;
        }
        }

    }
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
    
    sort(nums.begin(),nums.end());
    return nums;
    }
};