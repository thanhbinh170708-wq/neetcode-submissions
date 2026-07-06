class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    vector<int> temp;
    int n = temperatures.size();
    vector<int> a = temperatures;
    for(int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        if(temp.size() == 0 || temperatures[i] < temperatures[temp.back()])
        {
            temp.push_back(i);
        }
        else
        {
        while(temp.size() != 0 && temperatures[i] > temperatures[temp.back()])
        {
            a[temp.back()] = i - temp.back();
            temp.pop_back();
            
        }
        temp.push_back(i);
        }
    }    
    return a;
    }
};
