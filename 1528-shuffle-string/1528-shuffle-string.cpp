class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
    //     string res=s;
    //     for(int i=0;i<indices.size();i++)
    //     { res[indices[i]]=s[i];
    //     }  return res;
    // }

//cycling sort using O(1) space
for(int i=0;i<indices.size();i++)
{
    while(indices[i]!=i)
    {
        swap(s[i],s[indices[i]]);
        swap(indices[i],indices[indices[i]]);
    }
}
return s;
    }
};