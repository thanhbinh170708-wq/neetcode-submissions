class Solution {
public:
    int maxArea(vector<int>& heights) {
    int right_point = heights.size() - 1;
    int left_point = 0;
    int total_areas = 0;
    while (left_point < right_point)
        {
            int temp_result = (right_point - left_point) * min(heights[right_point],heights[left_point]);
            if (temp_result > total_areas)
            {
                total_areas = temp_result;
            }
            if (heights[left_point] < heights[right_point])
            {
                left_point ++;
            }
            else
            {
                right_point --;
            }
        }   
    return total_areas;
    }
};
