#include<cstring>
#include<cctype>
#include<string>
class Solution {
public:
    bool isPalindrome(string s) {
        int a = s.length();
        string pali = "";
        int i = 0;
        while (i < a) {
            if (isalpha(s[i]) || isdigit(s[i])){
                pali += tolower(s[i]);            
            }
            i +=1;
        }
        int j = 0;
        int rielen = pali.length();
        while (j <= (rielen / 2)){
            if (pali[j] != pali[rielen-j-1])
                return false;
            j += 1;
        }
        return true;
}
};
