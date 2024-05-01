#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int mxN = (1 << 15);
vector<int> palindroms;

void find_pal()
{
    for (int i = 0; i < mxN; i++)
    {
        string s = to_string(i);
        int len = s.length();
        bool flag = true;
        for (int i = 0; i < (len / 2); i++)
        {
            if (s[i] != s[len - i - 1])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            palindroms.push_back(i);
        }
    }
}

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    find_pal();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> cnt(mxN), a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
        }

        ll ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < palindroms.size(); j++)
            {
                int curr = (a[i] ^ palindroms[j]);
                ans += cnt[curr];
            }
        }
        cout << (ans / 2) << '\n';
    }
    return 0;
}