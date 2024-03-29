/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
// class Solution 
// {
// public:
//     int guessNumber(int n, long s = 1)
//     {
//         while (s <= n)
//         {
//             int x = (n + s) / 2;        // here, a conversion long -> int -> long happens
//             int g = guess(x);
//             if (g == 0) return x;
//             if (g < 0)  n = x - 1;
//             if (g > 0)  s = x + 1;
//         }
//         return -1;                   // unreachable (we should have found the number by now)
//     }
// };
class Solution {
public:
    int guessNumber(int n) {
        long low=1,high=n;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(guess(mid)==0)
                return mid;
            else if(guess(mid)==1)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
                
        }
        return -1; 
        
    }
};