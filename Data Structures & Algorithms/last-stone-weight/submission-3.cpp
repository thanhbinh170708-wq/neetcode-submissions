    void swap(int& a ,  int& b)
    {
        int temp = a;
        a = b;
        b = temp;
        
    }
    void swapdown(vector<int>& stones,int parent)
    {
        int length = stones.size();
        int child1 = parent*2+1;
        int child2 = parent*2+2;
        int maxchild;
        while(child2 < length || child1 < length)
        {
        if (child2 < length)
            {
                if (stones[child1] > stones[child2])
                    {
                        maxchild = child1;
                    }
                else
                    {
                        maxchild = child2;
                    }
            }
            else if (child1 < length)
            {
                maxchild = child1;
            }
            else 
            {
                maxchild = -1;
            }


            if (maxchild == -1)
            {
                break;
            }
            else if(maxchild == child1 && stones[parent] < stones[maxchild])
            {
                swap(stones[parent],stones[maxchild]);
                parent = maxchild;
                child1 = parent * 2 + 1;
                child2 = parent * 2 + 2;
            }
            else if (stones[parent] < stones[maxchild])
            {
                swap(stones[parent],stones[maxchild]);
                parent = maxchild;
                child1 = parent * 2 + 1;
                child2 = parent * 2 + 2;
            }
            else
            {
                parent = maxchild;
                child1 = parent * 2 + 1;
                child2 = parent * 2 + 2;
            }
        }
    }
    
    void heapify (vector<int>& stones)
    {
        int parent = (stones.size()-2)/2;         
        while(parent >= 0)
        {
           swapdown(stones,parent);
           parent--;
        }

    }



class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
    int n = stones.size();
    if (n == 1)
    {
        return stones[0];
    }
    else if (n == 2) 
    {
        return(abs(stones[0] - stones[1]));
    }
    else
    {
    heapify(stones);
    int maxi;
    
    while(stones[1] != 0 || stones[2] != 0)
    {
        if (stones[1] - stones[2] > 0)
        {
            maxi = 1;
        }
        else
        {
            maxi = 2;
        }
        stones[0] = stones[0] - stones[maxi];
        stones[maxi] = 0;
        
        swapdown(stones,maxi);
        swapdown(stones,0);



        

    }
    return stones[0] - max(stones[1],stones[2]);
    }
    
    }

};
