#include <bits/stdc++.h>
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	 int left = m-1, right = 0;

        while(left >=0 and right < n)
        {
            if(arr1[left]>arr2[right])
        {
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else
            break;
        }
        int k = 0;
        for(int i=m;i<n+m;i++)
        {
            arr1[i]=arr2[k++];
        }
        sort(arr1.begin(),arr1.end());
		return arr1;
}