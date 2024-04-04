#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    return a.first > b.first;
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
        ll n;
        cin >> n;
        vector<pair<ll, ll>> v1(n);
        vector<pair<ll, ll>> v2(n);
        vector<pair<ll, ll>> v3(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1[i] = {x, i};
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v2[i] = {x, i};
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v3[i] = {x, i};
        }
        sort(v1.begin(), v1.end(), cmp);
        sort(v2.begin(), v2.end(), cmp);
        sort(v3.begin(), v3.end(), cmp);

        ll mxsum = INT_MIN;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (v1[i].second != v2[j].second && v1[i].second != v3[k].second && v2[j].second != v3[k].second)
                    {
                        mxsum = max(v1[i].first + v2[j].first + v3[k].first, mxsum);
                    }
                }
            }
        }

        cout << mxsum << endl;
    }
    return 0;
}