class Solution {
public:
    int a[105] ={0};
    int totalmoney(vector<int>& nums,int i)
    {
       
        int n = nums.size() - 1;
        
        if (i == n || i == n - 1)
            {
            a[i] = nums[i];
            return a[i];
            }
        else if (i == n-2){
            a[i] = nums[i]+ nums[i+2];
            return a[i];
        }    
        else if (a[i] == 0 )
        {
            a[i] = max(totalmoney(nums,i+3),totalmoney(nums,i+2))+ nums[i] ;
            return a[i];
        }  
        else
        {
            return a[i];
        }
    }
    int rob(vector<int>& nums) {
        
        int n = -1;
        if (nums.size() == 1)
        {
            return nums[0];
        }
        return(max(totalmoney(nums,n+1),totalmoney(nums,n+2)));
        
    }
};
