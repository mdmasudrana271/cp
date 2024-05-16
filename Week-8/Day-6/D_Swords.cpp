#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b) * b)
using namespace std;

vector<ll> devisor(int n)
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
    int n;
    cin >> n;
    vector<ll> v(n);
    ll mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mx = max(mx, v[i]);
    }
    ll sum = 0;
    vector<ll> cnt;
    for (int i = 0; i < n; i++)
    {
        if (mx > v[i])
        {
            cnt.push_back(mx - v[i]);

            sum += mx - v[i];
        }
    }

    ll x = cnt.front();
    for (int i = 0; i < cnt.size(); i++)
    {
        x = gcd(x, cnt[i]);
    }
    ll y = sum / x;
    cout << y << " " << x << endl;

    return 0;
}