    
    void sort_max_pair(vector<int>& max_pair)
    {
        if (max_pair.size() < 2)
        {
            return;
        }
        else
        {
            if (max_pair[0] > max_pair[1])
            {
                swap(max_pair[0],max_pair[1]);
            }
        }
    }
    void sort_min_pair(vector<int>& min_pair)
    {
        if (min_pair.size() < 2)
        {
            return;
        }
        else
        {
            if (min_pair[0] < min_pair[1])
            {
                swap(min_pair[0],min_pair[1]);
            }
        }
    }
    void swap(int& a,int& b)
    {
        int temp = a;
        a = b;
        b = a;
    }
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
    vector<int> max_pair;
    vector<int> min_pair;
    for (int i = 0; i < nums.size(); i++)
    {
        if (max_pair.size() < 2)
        {
            max_pair.push_back(nums[i]);
            sort_max_pair(max_pair);
        }
        else{
            if (nums[i] > max_pair[0])
            {
                max_pair[0] = nums[i];
                sort_max_pair(max_pair);
            }
        }
        if (min_pair.size() < 2)
        {
            min_pair.push_back(nums[i]);
            sort_min_pair(min_pair);
        }
        else{
            if (nums[i] < min_pair[0])
            {
                min_pair[0] = nums[i];
                sort_min_pair(min_pair);
            }
        }

    }
    return max_pair[0] * max_pair[1] - min_pair[0] * min_pair[1];

    }
};