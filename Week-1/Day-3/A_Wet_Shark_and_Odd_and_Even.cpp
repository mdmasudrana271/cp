#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> v(n), v1;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            sum += v[i];
        }
        else
        {
            v1.push_back(v[i]);
        }
    }
    sort(v1.begin(), v1.end());
    if (v1.size() % 2 == 0)
    {
        for (int i = 0; i < v1.size(); i++)
        {
            sum += v1[i];
        }
    }
    else
    {
        for (int i = 1; i < v1.size(); i++)
        {
            sum += v1[i];
        }
    }
    cout << sum << endl;
    return 0;
}