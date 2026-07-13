    void swap(int& a, int& b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
class KthLargest {
public:
   vector<int> heap;
    int sizek;
    KthLargest(int k, vector<int>& nums) {
    sizek = k;
    for (int i = 0; i < nums.size();i++)
    {
        add(nums[i]);
    }                


    }
    
    int add(int val) {
        int n = heap.size();
        int parentindex = 0;
        int childrenindex1 = parentindex*2 +2;
        int childrenindex2 = parentindex*2 +1;
        int minchildren;
        if (childrenindex1 < n && heap[childrenindex1] > heap[childrenindex2])
            minchildren = childrenindex2;
        else
            minchildren = childrenindex1;
        
        if (n == 1)
        {
            if (sizek > 1)
                heap.push_back(val);
            else
            {
                if (val > heap[0])
                {
                    heap[0] = val;
                }
                return heap[0];
            }
            
            if (heap[1]< heap[0])
            {
                swap(heap[1],heap[0]);
            
            }
            return heap[0];
        }
        else if (n ==2)
        {
            if (sizek>2)
                heap.push_back(val);
            else 
            {
                if (sizek == 1)
                {
                    if (val > heap[0])
                {
                    val = heap[0];
                }
                }
                else if (sizek == 2)
                {
                    if (val >= heap[0] && val >= heap[1])
                    {
                        swap(heap[1],heap[0]);
                        heap[1] = val;
                    }
                    else if (val >= heap[0] && val <= heap[1])
                    {
                        heap[0] = val;
                    }
                }
                return heap[0];
            }
            if (heap[2]<heap[0])
            {
                swap(heap[2],heap[0]);
            }
            if(heap[1]<heap[0])
            {
                swap(heap[1],heap[0]);
            }
            return heap[0];
        }
        if (n == sizek)
        {
            if (val >= heap[0])
            {    
            heap[0] = val; 
            while(minchildren < n && heap[parentindex] >= heap[minchildren])
            {
                if (minchildren < n)
                    swap(heap[parentindex],heap[minchildren]);
                else
                    break;

                parentindex = minchildren;
                childrenindex1 = parentindex*2 +2;
                childrenindex2 = parentindex*2 +1;
                
                if (childrenindex1 < n && heap[childrenindex1] > heap[childrenindex2])
                minchildren = childrenindex2;
                else 
                minchildren = childrenindex1;
                if (childrenindex2 < n && childrenindex1 == n)
                {
                    minchildren = childrenindex2;
                } 
                
            }
            }
        }
        else if (n < sizek)
        {
            if (n == 0)
            {
                heap.push_back(val);
            }
            else
            {
            heap.push_back(val);
            int childrenindex = heap.size() -1;
            parentindex = (childrenindex -1)/2;
            while(parentindex >= 0 && heap[parentindex] >= heap[childrenindex])
            {
                swap(heap[parentindex],heap[childrenindex]);


                if(parentindex == 0)
                    break;
                childrenindex = parentindex;
                
                parentindex = (childrenindex -1)/2;
            }
            }
            
            
        }

        
            
        return heap[0];
        
        
    
    }
};
