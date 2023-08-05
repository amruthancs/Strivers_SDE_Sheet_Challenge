#variant 1
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    sort(book.begin(), book.end());
    int left = 0, right = n-1;
    while(left != right)
    {
        if(book[left]+book[right]==target)
        return "YES";
        else if(book[left] + book[right] < target)
        left++;
        else
        right--;
    }
    return "NO";

}

#variant 2
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> v;
        vector<int> res;
         for(int i=0;i<nums.size();i++)
         {
             int x = target - nums[i];
             if(v.find(x)!=v.end())
             {
                 res.push_back(v[x]);
                 res.push_back(i);
             }
             v[nums[i]] = i;
         }
        return res;
    }
};