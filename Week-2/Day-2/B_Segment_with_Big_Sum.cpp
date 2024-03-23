#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ll s;
    cin >> n >> s;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0, l = 0, r = 0, ans = INT_MAX;
    bool flag = false;
    while (r < n)
    {
        sum += v[r];
        if (sum >= s)
        {
            while (sum >= s)
            {
                ans = min(ans, r - l + 1);
                sum -= v[l];
                l++;
            }
            flag = true;
        }
        r++;
    }
    if (flag)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}