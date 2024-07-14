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
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mn = min(mn, v[i]);
        }
        sort(v.begin(), v.end());
        int ans = mn + 1;
        for (int i = 1; i < n; i++)
        {
            ans *= v[i];
        }
        cout << ans << endl;
    }
    return 0;
}