#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> k;
    sort(v.begin(), v.end());
    while (k--)
    {
        int l, r;
        cin >> l >> r;
        auto low = lower_bound(v.begin(), v.end(), l);
        auto up = upper_bound(v.begin(), v.end(), r);
        int cnt = up - low;
        cout << cnt << " ";
    }
    return 0;
}