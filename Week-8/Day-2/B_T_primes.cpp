#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

bool isPrime(ll n)
{
    if (n == 1)
    {
        return false;
    }
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isPerfectSqrt(ll n)
{
    ll x = sqrtl(n);
    return (x * x) == n;
}

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (isPrime(sqrtl(v[i])) && isPerfectSqrt(v[i]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}