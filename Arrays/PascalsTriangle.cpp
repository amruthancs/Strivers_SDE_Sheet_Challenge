#include <bits/stdc++.h> 
using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>>res;
    for(int i=1;i<=n;i++)
    {
        long long  val = 1;
        vector<long long int>vec;
        for(int k=1;k<=i;k++)
        {
           vec.push_back(val);
            //cout<<res[i][k];
           val = val * (i-k)/(k);
        }
        res.push_back(vec);
    }
    return res;
}

int main()
{
    printPascal(5);
}
