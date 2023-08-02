int majorityElement(vector<int> v) {
	// Write your code here
	int n = v.size();
	int element = 0, cnt = 0;
	for(int i=0;i<n;i++)
	{
        if(cnt==0)
		{
			element = v[i];
			cnt++;
		}
		else if(v[i]==element)cnt++;
		else cnt--;
	}
	return element;
}