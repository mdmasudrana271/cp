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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> pref(n + 1);
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + v[i - 1];
        }

        int ans = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, gcd(pref[i], (pref[n] - pref[i])));
        }
        cout << ans << endl;
    }
    return 0;
}