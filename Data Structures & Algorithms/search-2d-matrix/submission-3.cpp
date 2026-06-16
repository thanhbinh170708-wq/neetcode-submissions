class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int column = matrix[0].size();
        int i = 0;
        int j = row * column - 1 ;
        int k = (i + j)/2; 
        while(true)
        {
            if (matrix[k/column][k-(k/column)*column] < target)
            {
                i = k;
                k = (i+j) / 2;  
            
            }
            else if (matrix[k/column][k-(k/column)*column] > target)
            {
                j = k;
                k = (i+j) / 2;
            }
            else 
                return true;
            if (j - i == 1 || j == i)
                {
                if(matrix[i/column][i-(i/column)*column] == target || (matrix[j/column][j-(j/column)*column] == target))
                    return true;
                else 
                    return false;
                    
                }
        }

    }
};
