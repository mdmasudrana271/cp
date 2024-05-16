#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b) * b)
using namespace std;

vector<ll> devisor(ll n)
{
    vector<ll> v;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if ((n / i) != i)
            {
                v.push_back(n / i);
            }
        }
    }

    return v;
}

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, l;
        cin >> a >> b >> l;
        vector<ll> k = devisor(l);

        vector<ll> x, y;
        for (int i = 0; i <= 20; i++)
        {
            ll mult = pow(a, i);
            if (mult <= 1e6)
            {
                x.push_back(mult);
            }
            else
            {
                break;
            }
        }
        for (int i = 0; i <= 20; i++)
        {
            ll mult = pow(b, i);
            if (mult <= 1e6)
            {
                y.push_back(mult);
            }
            else
            {
                break;
            }
        }

        ll cnt = 0;
        for (ll i = 0; i < k.size(); i++)
        {
            bool flag = false;
            for (ll j = 0; j < x.size(); j++)
            {
                for (ll m = 0; m < y.size(); m++)
                {
                    if (k[i] * x[j] * y[m] == l)
                    {
                        cnt++;
                        flag = true;
                        break;
                    }
                }
                if (flag)
                {
                    break;
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}