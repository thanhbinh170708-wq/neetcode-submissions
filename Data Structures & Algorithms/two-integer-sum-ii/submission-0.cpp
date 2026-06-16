class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j = numbers.size() - 1;
        int i = 0;
        vector<int> value;
        while (i < j)
            if (numbers[i] + numbers[j] < target)
                i++;
            else if (numbers[j] + numbers[i] > target)
                j--;
            else  
                {
                    value.push_back(i+1);
                    value.push_back(j+1);
                    return value;
                }
    }           
};
