#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
     long long ns = arr.size();
	 long long as = 0 , asn = 0;
	 for(long long i=0;i<ns;i++)
	 {
		 as += (long long)arr[i];
		 asn += (long long)arr[i] * (long long)arr[i];
	 } 
	 long long s = (ns * (ns+1))/2;
	 long long sn = (ns * (ns+1) * (2*ns+1))/6;
 
	 long long val1 = as - s;
	 long long val2 = asn - sn;
	 val2  = val2 / val1;
	 long long x = (val2+val1)/2;
	 long long y = val2-x;

	 return {(int)y, (int) x};
	
}
