#include <bits/stdc++.h>
using namespace std;

bool palindrome(vector<int> &v)
{
    int l = 0, r = v.size() - 1;
    bool flag = true;
    while (l < r)
    {
        if (v[l] != v[r])
        {
            flag = false;
            break;
        }
        l++;
        r--;
    }
    return flag;
}

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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int l = 0, r = n - 1;
        int xr, xl;
        bool flag = true;
        while (l < r)
        {
            if (v[l] != v[r])
            {
                xl = v[l];
                xr = v[r];
                flag = false;
                break;
            }
            l++;
            r--;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            vector<int> x, y;
            for (int i = 0; i < n; i++)
            {
                if (v[i] != xr)
                {
                    x.push_back(v[i]);
                }
                if (v[i] != xl)
                {
                    y.push_back(v[i]);
                }
            }
            bool ans1 = palindrome(x);
            bool ans2 = palindrome(y);
            if (ans1 || ans2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
