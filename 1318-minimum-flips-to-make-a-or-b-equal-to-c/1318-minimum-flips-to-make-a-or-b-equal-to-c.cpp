class Solution {
public:
      int minFlips(int a, int b, int c) {
        // 0 | 0 = 0
        // 0 | 1 , 1 | 0, 1 | 1 = 1
        
        if (a == 0 && b == 0 && c == 0) return 0;
        
        int bitA = (a & 1), bitB = (b & 1), bitC = (c & 1), res = 0;            
        if (bitC == 0) {
            if (bitA != 0) res++;
            if (bitB != 0) res++;
        }
        else { 
            if (bitA == 0 && bitB == 0) res++;
        }
        
        return res + minFlips(a >> 1, b >> 1, c >> 1);   
      }
};