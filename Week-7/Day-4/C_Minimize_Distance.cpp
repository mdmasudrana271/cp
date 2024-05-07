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
        int n, k;
        cin >> n >> k;
        vector<int> neg, pos;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x > 0)
            {
                pos.push_back(x);
            }
            if (x < 0)
            {
                neg.push_back(abs(x));
            }
        }
        sort(pos.begin(), pos.end(), greater<int>());
        sort(neg.begin(), neg.end(), greater<int>());
        ll ans = 0;
        if (neg.size() == 0)
        {
            if (pos.size() != 0)
            {
                for (int i = 0; i < pos.size(); i += k)
                {
                    ans += pos[i] * 2;
                }
                ans -= pos[0];
            }

            cout << ans << endl;
        }
        else if (pos.size() == 0)
        {
            if (neg.size() != 0)
            {
                for (int i = 0; i < neg.size(); i += k)
                {
                    ans += neg[i] * 2;
                }
                ans -= neg[0];
            }

            cout << ans << endl;
        }
        else
        {
            for (int i = 0; i < pos.size(); i += k)
            {
                ans += pos[i] * 2;
            }
            for (int i = 0; i < neg.size(); i += k)
            {
                ans += neg[i] * 2;
            }
            if (pos[0] >= neg[0])
            {
                ans -= pos[0];
            }
            else
            {
                ans -= neg[0];
            }
            cout << ans << endl;
        }
    }
    return 0;
}