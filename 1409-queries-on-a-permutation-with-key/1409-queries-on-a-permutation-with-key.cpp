class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) 
    {
         vector<int>pos(m);
        vector<int>ans;
        iota(pos.begin(),pos.end(),0);
        for(int x:queries)
        {
            ans.push_back(pos[x-1]);
            for(int &y:pos)
            {
                if(y<pos[x-1]) ++y;
            }
            pos[x-1]=0;
        }
        return ans;
    }
};

//iota function in c++ fills increasing sequence in the range first,last
//syntax is vector<int>pos, iota(pos.begin(),pos.end(),0);vector