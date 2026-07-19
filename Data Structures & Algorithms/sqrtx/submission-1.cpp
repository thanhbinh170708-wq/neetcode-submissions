class Solution {
public:
    int mySqrt(int x) {
    int divide = 0;
    int start = 1; int end = x;
    int mid = (start + end) / 2;
    if (x <= 1)
    {
        return x;
    }
    while(true)
    {
        divide = x/mid;
        if (end - start <= 1)
        {
            if(x/end == end)
            {
                return end;
            }
            else
            {
                return start;
            }
        }

        if (divide == mid)
        {
            return divide;
        }
        else if (divide > mid)
        {
            start = mid;
            mid = (start + end) /2;
        }
        else
        {
            end = mid;
            mid = (start+end)/2;
        }
    }


    }
};