/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
    int ceil = n;
    int floor = 1;
    int guess_num = n/2;
    while (true)
    {
        if(guess(guess_num) == 0)
            return guess_num;
        else if (guess(guess_num) == 1)
        {
            floor = guess_num + 1;
            guess_num = (floor + ceil)/2;
        }
        else
        {
            ceil = guess_num-1;
            guess_num = (floor+ceil) / 2; 
        }
    }    
    }
};