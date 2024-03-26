#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    string st;
    cin >> st;
    int l = 0, r = 0, ans = -1;
    unordered_map<char, int> mp;
    while (r < n)
    {
        mp[st[r]]++;
        if (mp.size() < k)
        {
            r++;
        }
        else if (mp.size() == k)
        {
            ans = max(ans, r - l + 1);
            r++;
        }
        else
        {
            while (mp.size() > k)
            {
                mp[st[l]]--;
                if (mp[st[l]] == 0)
                {
                    mp.erase(st[l]);
                }
                l++;
            }
            r++;
        }
    }
    cout << ans << endl;
    return 0;
}