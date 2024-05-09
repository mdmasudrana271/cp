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
        string s;
        cin >> s;
        int ans = 1e9;
        for (char i = 'a'; i <= 'z'; i++)
        {
            int cnt = 0;
            int l = 0, r = n - 1;
            while (l <= r)
            {
                if (s[l] != s[r])
                {
                    if (s[l] == i)
                    {
                        l++;
                        cnt++;
                    }
                    else if (s[r] == i)
                    {
                        r--;
                        cnt++;
                    }
                    else
                    {
                        cnt = 1e9;
                        break;
                    }
                }
                else
                {
                    l++;
                    r--;
                }
            }
            ans = min(ans, cnt);
        }
        if (ans == 1e9)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}