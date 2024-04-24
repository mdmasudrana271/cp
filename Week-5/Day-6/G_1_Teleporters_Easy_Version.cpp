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
        ll n, c;
        cin >> n >> c;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] += (i + 1);
        }
        sort(v.begin(), v.end());
        ll sum = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum + v[i] > c)
            {
                break;
            }
            sum += v[i];
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}