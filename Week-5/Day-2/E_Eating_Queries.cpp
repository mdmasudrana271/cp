#include <bits/stdc++.h>
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
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        vector<int> pref(n + 1);
        pref[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            pref[i] = pref[i - 1] + v[i];
        }
        while (q--)
        {

            int x;
            cin >> x;
            if (x > pref[n - 1])
            {
                cout << -1 << endl;
                continue;
            }
            int l = 0, r = n - 1, mid, idx = -1;
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (pref[mid] >= x)
                {
                    idx = mid;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            cout << idx + 1 << endl;
        }
    }
    return 0;
}