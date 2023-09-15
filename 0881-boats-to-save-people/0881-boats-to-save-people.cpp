class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        //greedy or dp?
        sort(people.begin(),people.end());
        // reverse(people.begin(),people.end());
        //now pair the heaviest person with the lightest person and if they cannot go on the same boat then let the heaviest person go alone, if they can go together then do boat++,increment left and decrement right else boat++,right--
        
        int left=0,right=people.size()-1,sum=0,boat=0;
        while(left<=right)
        {
            sum=people[left]+people[right];
            if(sum<=limit)
            {
                boat++;
                left++;right--;
            }
            else{
                boat++;
                right--;
            }
        }
        return boat;
    }
};