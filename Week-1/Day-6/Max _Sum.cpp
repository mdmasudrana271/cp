long maximumSumSubarray(int k, vector<int> &Arr, int N)
{
    // code here
    int l = 0, r = 0;
    long long sum = 0, ans = 0;
    while (r < N)
    {
        sum += Arr[r];
        if (r - l + 1 == k)
        {
            ans = max(ans, sum);
            sum -= Arr[l];
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }

    return ans;
}