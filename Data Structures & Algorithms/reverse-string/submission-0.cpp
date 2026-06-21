class Solution {
public:
    void reverseString(vector<char>& s) {
    int last_pointer = s.size() - 1;
    int first_pointer = 0;
    char temp;
    while(first_pointer < last_pointer)
    {
        temp = s[first_pointer];
        s[first_pointer] = s[last_pointer];
        s[last_pointer] = temp;
        first_pointer ++;
        last_pointer --;
    }
    return;
    }
};