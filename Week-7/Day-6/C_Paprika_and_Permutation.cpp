#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
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
        vector<int> v(n), b;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            if ((mp[v[i]] > 1 && v[i] <= n) || v[i] > n)
            {
                b.push_back(v[i]);
            }
        }
        sort(b.begin(), b.end(), greater<int>());
        int ans = b.size();
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (mp[i + 1] == 0)
            {
                int x = b.back();
                b.pop_back();
                int y = i + 1;
                if (x % (x - y) == y)
                {
                    continue;
                }
                else
                {
                    flag = false;
                }
            }
        }
        if (flag)
        {

            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}