class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    int maga[26];
    int rans[26];
    for (int i = 0; i < 26; i++)
    {
        maga[i] = 0;
        rans[i]= 0;
    }
    for (int i = 0; i < magazine.size(); i++)
    {
        maga[int(magazine[i])-97]++;
    }
    for (int i = 0; i < ransomNote.size(); i++)
    {
        rans[int(ransomNote[i])-97]++;
        if (rans[int(ransomNote[i])-97] > maga[int(ransomNote[i])-97])
        {
            return false;
        }
    
    }
    return true;
    


    }
};