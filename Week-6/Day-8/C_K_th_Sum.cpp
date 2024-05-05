#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    auto ok = [&](int mid)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += upper_bound(b.begin(), b.end(), mid - a[i]) - b.begin();
        }
        return cnt;
    };
    int l = a[0] + b[0], r = a[n - 1] + b[n - 1], mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid) < k)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << l << endl;
    return 0;
}