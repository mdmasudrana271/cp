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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll pref = 0;
    ll ans = 0;
    map<ll, int> mp;
    mp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        pref += v[i];
        ans += mp[pref - x];
        mp[pref]++;
    }
    cout << ans << endl;
    return 0;
}