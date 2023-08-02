vector<int> majorityElement(vector<int> v) {
	// Write your code here
	int n = v.size();
	int element1 = 0, cnt1 = 0, element2=0,cnt2=0;
	for(int i=0;i<n;i++)
	{
        if(cnt1==0 and element2!=v[i])
		{
			element1 = v[i];
			cnt1++;
		}
		else if(cnt2==0 and element1!=v[i])
		{
			element2 = v[i];
			cnt2++;
		}
		else if(v[i]==element1)cnt1++;
		else if(v[i]==element2)cnt2++;

                else {
                        cnt1--;
                        cnt2--;
                }
        }
        cnt1=0; cnt2=0;
		for(int i = 0;i<n;i++)
		{
			if(v[i]==element1)cnt1++;
			if(v[i]==element2)cnt2++;
		}
		int m = n/3 + 1;
		vector<int> x;
		if(cnt1>=m)x.push_back(element1);
		if(cnt2>=m)x.push_back(element2);
	return x;
}