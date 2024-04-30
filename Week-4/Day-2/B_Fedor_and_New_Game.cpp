#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m + 1);
    for (int i = 0; i <= m; i++)
    {
        cin >> v[i];
    }

    vector<vector<int>> all_mask;

    for (int i = 0; i <= m; i++)
    {
        vector<int> a;
        for (int k = 0; k < n; k++)
        {
            if ((v[i] >> k) & 1)
            {
                a.push_back(1);
            }
            else
            {
                a.push_back(0);
            }
        }
        all_mask.push_back(a);
    }

    int ans = 0;
    vector<int> fedor = all_mask[m];
    for (int i = 0; i < all_mask.size() - 1; i++)
    {
        vector<int> a = all_mask[i];
        int cnt = 0;
        for (int k = 0; k < n; k++)
        {
            if (fedor[k] != a[k])
            {
                cnt++;
            }
        }
        if (cnt <= k)
        {
            ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}