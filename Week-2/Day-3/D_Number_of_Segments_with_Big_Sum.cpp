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
    int l = 0, r = 0;
    ll sum = 0, cnt = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum >= s)
        {
            while (sum >= s)
            {
                cnt += n - r;
                sum -= v[l];
                l++;
            }
        }
        r++;
    }

    cout << cnt << endl;

    return 0;
}