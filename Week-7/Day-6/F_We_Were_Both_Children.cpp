#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> fre(n + 2, 0);
        for (int i = 0; i < n; i++)
        {
            if (v[i] > n)
            {
                continue;
            }
            fre[v[i]]++;
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int cnt = 0;
            for (int j = 1; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    cnt += fre[j];
                    if (j * j != i)
                    {
                        cnt += fre[i / j];
                    }
                }
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
    return 0;
}