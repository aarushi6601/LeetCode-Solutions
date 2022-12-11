class Solution 
{
public:
    bool check_letter(string &s)
    {
        for(auto it:s)
        {
            if(it>=97 && it<=122)
                return true;
        }
        return false;
    }
    int maximumValue(vector<string>& strs) 
    {
        int maxi=0;
        for(auto it:strs)
        {
            if(check_letter(it)) maxi = max(maxi, (int)it.size());
            else maxi = max(maxi, stoi(it));
        }
        return maxi;
        
    }
};