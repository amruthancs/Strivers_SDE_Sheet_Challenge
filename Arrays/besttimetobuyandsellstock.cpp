#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int size = prices.size();
    int maxpro = 0, minval = INT_MAX;

    for(int i=0;i<size;i++)
    {
        minval = min(minval,prices[i]);
        maxpro = max(maxpro,prices[i]-minval);
    }
    return maxpro;
}