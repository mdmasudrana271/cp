#include <bits/stdc++.h>
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
    int q;
    cin >> q;
    sort(v.begin(), v.end());
    for (int i = 0; i < q; i++)
    {
        int m;
        cin >> m;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (v[mid] <= m)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << l << endl;
    }
    return 0;
}