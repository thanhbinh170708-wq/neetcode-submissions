    bool check_sub_palindrome(string s, int first_pointer, int last_pointer)
    {
        while (first_pointer < last_pointer)
        {
            if (s[first_pointer] != s[last_pointer])
            {
                return false;
            }
            else {
                first_pointer ++;
                last_pointer --;
            }
        }
        return true;
    }
class Solution {
public:
    bool validPalindrome(string s) {
    int last_pointer = s.size() - 1;
    int first_pointer = 0;
    bool lap = false;
    while (first_pointer < last_pointer)
    {
        if (s[first_pointer] != s[last_pointer])
        {
            if (check_sub_palindrome(s,first_pointer,last_pointer -1 ) == false && check_sub_palindrome(s,first_pointer+1,last_pointer) ==false)
                {
                    return false;
                }   
            else
            {
                return true;
            }
        }         
        
        else
        {
        first_pointer ++;
        last_pointer --;
        }
    }
    return true;
    }
};