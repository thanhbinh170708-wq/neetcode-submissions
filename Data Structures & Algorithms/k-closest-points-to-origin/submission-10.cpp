
    float dis(vector<int> p)
    {
        return (sqrt(p[0] * p[0] + p[1] * p[1]));
    }
    void swap(vector<int>& a , vector<int>& b)
    {
        vector<int> temp = a;
        a = b;
        b = temp;
    }
    void sort_heap(vector<vector<int>>& a)
    {
        int parent = 0;
        int child1 = parent*2 + 1;
        int child2 = parent*2 + 2;
        int maxchild;
        while (true)
        {
            if (child2 < a.size())
            {
                if (dis(a[child1]) > dis(a[child2]))
                {
                    maxchild = child1;
                }
                else
                {
                    maxchild = child2;
                }
                if (dis(a[parent]) < dis(a[maxchild]))
                {
                    swap(a[parent],a[maxchild]);
                    parent = maxchild;
                    child1 = parent*2+1;
                    child2 = parent*2+2;
                }
                else
                {
                    return;
                }
            }
            else if (child1 < a.size() && dis(a[child1]) > dis(a[parent]))
            {
                swap(a[parent],a[child1]);
                return;
            }
            else
            {
                return;
            }
        }
    }
    void shapeheap(vector<vector<int>>& a)
    {
        int child = a.size() -1 ;
        int parent = (child-1)/2;
        if (parent == child)
        {
            return;
        }
        else
        {
            while(parent > 0)
            {
                if (dis(a[parent]) < dis(a[child]))
                {
                    swap(a[parent],a[child]);
                    child = parent;
                    parent = (child-1)/2;
                }
                else
                {
                    return;
                }

                
            }
            if (dis(a[parent]) < dis(a[child]))
                {
                    swap(a[parent],a[child]);
                }
            return;
        }

    }
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    vector<vector<int>> ans;
    float min = 100000;
    for(int i = 0; i < points.size();i++)
    {
        if (ans.size() < k)
        {
            ans.push_back(points[i]);
            shapeheap(ans);
        }
        else if (dis(points[i]) < dis(ans[0]))
        {
            ans[0] = points[i];
            sort_heap(ans);
        }
    }
    return ans;
    

    }
};
