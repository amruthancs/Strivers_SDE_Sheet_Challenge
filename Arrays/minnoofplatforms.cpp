int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int i=0,j=1,maxi=1,count=1;
    while(i<n and j<n)
    {
        if(dt[i]>=at[j])
        {
            j++;
            count++;
        }
        else{
            i++;
            count--;
        }
        maxi = max(count,maxi);
    }
    return maxi;
}