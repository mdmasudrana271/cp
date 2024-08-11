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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[__lg(x)]++;
        }

        ll ans = 0;
        for (auto [x, y] : mp)
        {
            ans += (1LL * y * (y - 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}