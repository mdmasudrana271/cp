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
        ll n, m, h;
        cin >> n >> m >> h;
        vector<ll> nv(n);
        vector<ll> mv(m);
        for (int i = 0; i < n; i++)
        {
            cin >> nv[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> mv[i];
        }

        sort(nv.begin(), nv.end(), greater<int>());
        sort(mv.begin(), mv.end(), greater<int>());
        ll sum = 0;
        if (n > m)
        {
            for (int i = 0; i < m; i++)
            {
                ll x = mv[i] * h;
                if (x <= nv[i])
                {
                    sum += x;
                }
                else
                {
                    sum += nv[i];
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                ll x = mv[i] * h;
                if (x <= nv[i])
                {
                    sum += x;
                }
                else
                {
                    sum += nv[i];
                }
            }
        }

        cout << sum << endl;
    }
    return 0;
}