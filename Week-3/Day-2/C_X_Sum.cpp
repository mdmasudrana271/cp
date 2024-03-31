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
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> v(n, vector<ll>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }

        ll ans = 0, sum, x, y;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum = v[i][j];

                x = j - 1;
                y = j + 1;
                for (int k = i - 1; k >= 0; k--)
                {
                    if (x >= 0)
                    {
                        sum += v[k][x];
                        x--;
                    }
                    if (y < m)
                    {
                        sum += v[k][y];
                        y++;
                    }
                }

                x = j - 1;
                y = j + 1;
                for (int k = i + 1; k < n; k++)
                {
                    if (x >= 0)
                    {
                        sum += v[k][x];
                        x--;
                    }
                    if (y < m)
                    {
                        sum += v[k][y];
                        y++;
                    }
                }

                ans = max(ans, sum);
            }
        }
        cout << ans << endl;
    }
    return 0;
}