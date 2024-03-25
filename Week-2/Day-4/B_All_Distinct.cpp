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
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int cnt = 0;
        for (auto it : mp)
        {
            cnt += it.second - 1;
        }
        if (cnt % 2 != 0)
        {
            cout << n - cnt - 1 << endl;
        }
        else
        {
            cout << n - cnt << endl;
        }
    }
    return 0;
}