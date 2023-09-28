class Solution {
public:
    int hIndex(vector<int>& cit) {
	int n=cit.size();
	int i,total=0;
	vector<int> num(n+1,0);

	for(i=0;i<n;i++)
	{
		if(cit[i]<n+1)
			num[cit[i]]++;
		else
			num[n]++;
	} 
	for(i=n;i>=0;i--){
		if(num[i])
			total+=num[i];
        if(total>=i)
			return i;
	} 
	return 0;
}
};