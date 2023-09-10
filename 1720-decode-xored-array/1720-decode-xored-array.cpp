class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        //since encoded[i]=arr[i] xor arr[i+1] so arr[i+1]=arr[i] xor encoded[i]
      
        vector<int>arr(encoded.size()+1);
        arr[0]=first;
        for(int i=0;i<encoded.size();i++)
        {
            arr[i+1]=arr[i] ^ encoded[i];
        }
        return arr;
    }
};