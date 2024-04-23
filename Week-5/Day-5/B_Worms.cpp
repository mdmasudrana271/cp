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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pref(n);
    pref[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + v[i];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1, ans = 0;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (x <= pref[mid])
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}