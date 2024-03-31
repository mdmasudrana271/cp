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
        vector<vector<int>> v(n, vector<int>(n - 1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> v[i][j];
            }
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i][n - 2]]++;
        }
        int y;
        for (auto x : mp)
        {
            if (x.second == 1)
            {
                y = x.first;
            }
        }
        int sum = n * (n + 1) / 2;
        vector<int> ans;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (v[i][n - 2] == y)
                {
                    ans.push_back(v[i][j]);
                    x += v[i][j];
                }
            }
        }
        int last = sum - x;
        ans.push_back(last);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}