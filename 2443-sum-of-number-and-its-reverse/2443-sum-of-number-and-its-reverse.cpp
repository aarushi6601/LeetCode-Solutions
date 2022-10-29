class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        for(int i=num/2;i<=num;i++)
        {
            string str=to_string(i);
            reverse(str.begin(),str.end());
            int x=stoi(str);
            if(i+x==num)
            {
                return true;
            }
            
        }
        return false;
    }
};