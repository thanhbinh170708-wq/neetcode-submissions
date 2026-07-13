class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>s;
        for(int i = 0; i< n; i++)
        {
            if (s.find(nums[i]) == s.end())
                s[nums[i]]  = 1;
            else
            {
                s[nums[i]] ++;
            } 
        }
        vector<int> saved[2001]; 

        for(auto i:s)
        {
            
            saved[i.second].push_back(i.first+1000);
        }
        vector <int> ans;
        for (int i = 2000; i >= 0; i--)
        {
            n = saved[i].size();
            if (n != 0)
            {
                for(int j = 0; j < n; j++)
                {
                    if (k != 0)
                    {
                        ans.push_back(saved[i][j]-1000);
                        k--;
                    }
                    else
                    {
                        break;
                    }

                }
            }
        }


        return ans;
    
        
    }
};
