class Solution {
public:
    int trap(vector<int>& height) {
    int water = 0;
    int temp_water = 0;
    int first_pointer = 0;
    int last_pointer = height.size()-1;
    int boundary_left = height[first_pointer];
    int boundary_right = height[last_pointer];
    int min_boundary = min(boundary_left, boundary_right);   
    while (first_pointer < last_pointer)
    {
        min_boundary = min(boundary_left,boundary_right);
        
        if (boundary_right >= boundary_left)
        {
            temp_water += min_boundary - height[first_pointer];
            first_pointer ++;
            if (temp_water > water)
            {
                water = temp_water;
            }
            if (height[first_pointer] > boundary_left && first_pointer < last_pointer)
            {
                boundary_left = height[first_pointer]; 
                min_boundary = min(boundary_left, boundary_right);  
            }
            
        }
        else
        {
            
            temp_water += min_boundary - height[last_pointer];
            last_pointer --;
            if (temp_water > water)
            {
                water = temp_water;
            }
                if (height[last_pointer] > boundary_right && first_pointer < last_pointer)
                {
                    boundary_right = height[last_pointer];
                
                    min_boundary = min(boundary_left, boundary_right);
                }
            
        }
        
        
        
    }
    return water;
    }
};
