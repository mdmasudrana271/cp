#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string x, y;
        cin >> x >> y;
        int n = x.size();
        int m = y.size();
        int dp[n + 1][m + 1];
        int ans = 0;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
                else if (x[i - 1] == y[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                {
                    dp[i][j] = 0;
                }
                ans = max(ans, dp[i][j]);
            }
        }

        cout << n + m - 2 * ans << endl;
    }
    return 0;
}