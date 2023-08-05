class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         vector<int> st(256,-1);
    int n = s.size();
    int len = 0;
    int left = 0 , right = 0;
     
     while(right<n)
     {
         if(st[s[right]]!=-1)
         left = max(st[s[right]]+1, left);

         st[s[right]] = right;
         len  = max(len, right - left + 1);
         right++;
     }
     return len;
    }
};