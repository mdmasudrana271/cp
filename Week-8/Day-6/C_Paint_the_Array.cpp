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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = v.front();
        for (int i = 2; i < n; i += 2)
        {
            ans = gcd(ans, v[i]);
        }
        ll ans1 = v[1];
        for (int i = 3; i < n; i += 2)
        {
            ans1 = gcd(ans1, v[i]);
        }

        bool flag = true;
        for (int i = 1; i < n; i += 2)
        {
            if (v[i] % ans == 0)
            {
                flag = false;
                break;
            }
        }
        bool flag1 = true;
        for (int i = 0; i < n; i += 2)
        {
            if (v[i] % ans1 == 0)
            {
                flag1 = false;
                break;
            }
        }
        if (flag)
        {
            cout << ans << endl;
        }
        else
        {
            bool flag1 = true;
            for (int i = 0; i < n; i += 2)
            {
                if (v[i] % ans1 == 0)
                {
                    flag1 = false;
                    break;
                }
            }
            if (flag1)
            {
                cout << ans1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}