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
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(k + 1), b(k + 1);
        a[0] = 0;
        b[0] = 0;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= k; i++)
        {
            cin >> b[i];
        }
        while (q--)
        {
            int d;
            cin >> d;
            auto idx = lower_bound(a.begin(), a.end(), d) - a.begin();
            if (a[idx] == d)
            {
                cout << b[idx] << " ";
            }
            else
            {
                ll distDiff = a[idx] - a[idx - 1];
                ll timeDiff = b[idx] - b[idx - 1];
                ll time = b[idx - 1] + ((d - a[idx - 1]) * timeDiff / distDiff);
                cout << time << " ";
            }
        }
        cout << endl;
    }
    return 0;
}