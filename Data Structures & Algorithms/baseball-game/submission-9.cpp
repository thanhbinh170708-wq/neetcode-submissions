#include <algorithm>
#include <cctype>
#include <string>
class Solution {
public:
    int calPoints(vector<string>& operations) {
    int sum = 0;
    int tempint;
    int cur = 0;
    vector<int> a;
    while(cur < operations.size())
    {  
      
        
            if (operations[cur] == "+")
            {
                
                sum += a[a.size()-1] + a[a.size()-2];
                a.push_back(a[a.size()-1] + a[a.size()-2]);
                cur++;
            }
            else if (operations[cur] == "C")
            {
                sum = sum - a[a.size()-1];
                a.pop_back();
                cur++;

            }
            else if (operations[cur] == "D")
            {
                sum += a[a.size()-1] *2;
                a.push_back(a[a.size()-1]*2);
                cur++;
            }
            else
            {
                a.push_back(stoi(operations[cur]));
                sum += stoi(operations[cur]);
                cur ++;
            }

    }
    return sum;
    }
};