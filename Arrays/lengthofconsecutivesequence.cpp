#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int cnt = 1,max = 1;
    unordered_set<int> s;
    if(n==0)return 0;
    for(int i=0;i<n;i++)
    {
           s.insert(arr[i]);
    }
   
     for(auto it : s)
     {
         if(s.find(it-1)==s.end())
         {
             cnt = 1;
             int x = it;
             while(s.find(x+1)!=s.end())
             {
                 x+=1;
                 cnt++;
             }
         }
         max = max < cnt ? cnt : max;
     }
    return max;
}