class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int FirstPointer = nums1.size() - nums2.size()-1;
    int ThirdPointer = nums1.size()-1;
    int SecPointer = nums2.size()-1;
    if (m == 0)
    {
        nums1 = nums2;
        return;
    }
    else if (n == 0)
    {
        return;
    }
    while(true)
    {
        if (FirstPointer != -1 && SecPointer != -1)
        {
            if (nums2[SecPointer] > nums1[FirstPointer])
            {
                nums1[ThirdPointer] = nums2[SecPointer];
                ThirdPointer--;
                SecPointer --;
            }
            else
            {
                if (FirstPointer != -1)
                {
                    nums1[ThirdPointer] = nums1[FirstPointer];
                    ThirdPointer--;
                    FirstPointer --;
                }
            }
        }
        else if (FirstPointer == -1 && SecPointer != -1)
        {
            nums1[ThirdPointer] = nums2[SecPointer];
            ThirdPointer--;
            SecPointer --;
        }
        else
        {
            break;
        }
    }

    
    }
};