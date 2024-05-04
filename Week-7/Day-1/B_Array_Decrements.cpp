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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        bool flag = true;
        int diff = -1, zdiff = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                flag = false;
                break;
            }
            if (b[i] != 0)
            {
                if (diff == -1)
                {
                    diff = a[i] - b[i];
                }
                else
                {
                    if (a[i] - b[i] != diff)
                    {
                        flag = false;
                        break;
                    }
                }
            }
            else
            {
                zdiff = max(zdiff, (a[i] - b[i]));
            }
        }
        if (!flag)
        {
            cout << "NO" << endl;
            continue;
        }
        if (diff == -1 || zdiff <= diff)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}