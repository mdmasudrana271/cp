#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b) * b)
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
        sort(v.begin(), v.end());
        int missing = -1;
        vector<int> ans;
        for (int i = 0; i <= n; i++)
        {
            if (mp[i] == 0)
            {
                missing = i;
                break;
            }
            else if (mp[i] == 1)
            {
                ans.push_back(i);
            }
        }
        if (ans.size() == 0 || ans.size() == 1)
        {
            cout << missing << endl;
        }
        else if (ans.size() > 1)
        {
            cout << ans[1] << endl;
        }
    }
    return 0;
}