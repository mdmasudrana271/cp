#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b) * b)
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
        int n;
        cin >> n;

        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        vector<vector<int>> v(1001);
        for (int i = 1; i <= n; i++)
        {
            v[arr[i]].push_back(i);
        }

        int ans = INT_MIN;

        for (int i = 1; i <= 1000; i++)
        {
            for (int j = i; j <= 1000; j++)
            {
                if ((!v[i].empty() && !v[j].empty()) && gcd(i, j) == 1)
                {
                    int tmp = v[i].back() + v[j].back();
                    ans = max(ans, tmp);
                }
            }
        }

        if (ans == INT_MIN)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}