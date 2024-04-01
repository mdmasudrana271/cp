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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> dis;
        int stp = 0;
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            int l = i;
            int r = n - i - 1;
            if (s[i] == 'R')
            {
                if (l > r)
                {
                    stp++;
                    total += l;
                    dis.push_back(l - r);
                }
                else
                {
                    total += r;
                }
            }
            else
            {
                if (r > l)
                {
                    stp++;
                    total += r;
                    dis.push_back(r - l);
                }
                else
                {
                    total += l;
                }
            }
        }

        vector<ll> ans(n + 1);
        for (int i = stp; i <= n; i++)
        {
            ans[i] = total;
        }

        sort(dis.begin(), dis.end(), greater<ll>());
        for (int i = stp - 1; i >= 1; i--)
        {
            total -= dis.back();
            dis.pop_back();
            ans[i] = total;
        }

        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}