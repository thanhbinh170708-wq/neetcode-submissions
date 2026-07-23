    void swap(int& a, int& b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void reshape_heap(vector<int>& min_heap)
    {
        int child = min_heap.size()-1;
        int parent = (child-1)/2;
        if (parent == child)
        {
            return;
        }
        else
        {
            while(parent > 0)
            {
                if (min_heap[child] < min_heap[parent])
                {
                    swap(min_heap[child],min_heap[parent]);
                    child = parent;
                    parent = (child-1)/2;
                }
                else
                {
                    return;
                }
            }
            if (min_heap[child] < min_heap[parent])
            {
                swap(min_heap[child],min_heap[parent]);
            }
        }
    }
    void sort_heap(vector<int>& min_heap)
    {
        int parent = 0;
        int child1 = parent*2+1;
        int child2 = parent*2+2;
        int minchild;
        while(true)
        { 
            if (child2 < min_heap.size())
            {
                if (min_heap[child1] < min_heap[child2])
                {
                    minchild = child1;
                }
                else
                {
                    minchild = child2;
                }
                if (min_heap[minchild] < min_heap[parent])
                {
                    swap(min_heap[minchild],min_heap[parent]);
                    parent = minchild;
                    child1 = parent*2+1;
                    child2 = parent*2+2;
                }
                else
                {
                    return;
                }
            }
            else if (child1 < min_heap.size())
            {
                if (min_heap[child1] < min_heap[parent])
                { 
                    swap(min_heap[child1],min_heap[parent]);    
                }
                return;
            }
            else
            {
                return;
            }
        }
    }


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    vector<int> min_heap;
    for(int i = 0; i < nums.size(); i++)
    {
        if (i < k)
        {
            min_heap.push_back(nums[i]);
            reshape_heap(min_heap);
        }
        else if (nums[i] > min_heap[0])
        {
            min_heap[0] = nums[i];
            sort_heap(min_heap);
        }
    }
    return min_heap[0];   
    }
};
