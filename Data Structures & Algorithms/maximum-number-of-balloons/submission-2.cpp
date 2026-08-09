class Solution {
public:
    int maxNumberOfBalloons(string text) {
    int count_o = 0;
    int count_l = 0;
    int count_b = 0;
    int count_a = 0;
    int count_n = 0;
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == 'o')
        {
            count_o ++;
        }
        else if (text[i] == 'b')
        {
            count_b ++;
        }
        else if (text[i] == 'a')
        {
            count_a ++;
        }
        else if (text[i] == 'l')
        {
            count_l ++;
        }
        else if (text[i] == 'n')
        {
            count_n ++;
        }
    }
    return min({count_o / 2, count_b, count_a,count_n,count_l/2});
    }
};