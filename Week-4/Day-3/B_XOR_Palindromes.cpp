#include <bits/stdc++.h>
#define ll long long int
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
        string ans = "";
        int b = 0, g = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                g += 2;
            }
            else
            {
                b++;
            }
            l++;
            r--;
        }
        for (int i = 0; i <= n; i++)
        {
            int total = i;
            total -= b;
            if (total < 0)
            {
                ans.push_back('0');
                continue;
            }

            total = max((total % 2), total - g);
            total = max(0, total - (n % 2));
            if (total == 0)
            {
                ans.push_back('1');
            }
            else
            {
                ans.push_back('0');
            }
        }

        cout << ans << endl;
    }
    return 0;
}