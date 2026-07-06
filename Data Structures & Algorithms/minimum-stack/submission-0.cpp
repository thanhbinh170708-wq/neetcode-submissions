class MinStack {
public:
    vector <int> a;
    vector <int> mins;
    MinStack() {

    }
    
    void push(int val) {
    a.push_back(val);
    if (mins.size() == 0 || val <= mins.back())
    {
        mins.push_back(val);
    } 
    }
    
    void pop() {
    if (a.back() == mins.back())
    {   
    mins.pop_back();
    }
    a.pop_back();
    }
    
    int top() {
            return a.back();

    }
    
    int getMin() {
        return mins.back();
        
    }
};
