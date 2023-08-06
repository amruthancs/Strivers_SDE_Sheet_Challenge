#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<vector<int>> ans;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n-2;i++)
	{
		if(i>0 and arr[i]==arr[i-1])
		{
             continue;
		}
		int j=i+1;
		int m=n-1;
		while(j<m)
		{
			long long sum = arr[i];
			sum+=arr[j];
			sum+=arr[m];
			if(sum==K)
			{
				vector<int> res = {arr[i],arr[j],arr[m]};
				ans.push_back(res);
				m--;
				j++;
				while(j<m and arr[m]==arr[m+1])m--;
				while(j<m and arr[j]==arr[j-1])j++;
			}
			else if (sum<K)
			{
				j++;
			}
			else m--;
		}
	}
	return ans;
}