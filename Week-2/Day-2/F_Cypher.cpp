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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            string st;
            cin >> x >> st;
            for (int j = 0; j < x; j++)
            {
                if (st[j] == 'D')
                {
                    if (v[i] == 9)
                    {
                        v[i] = 0;
                    }
                    else
                    {
                        v[i] = v[i] + 1;
                    }
                }
                else if (st[j] == 'U')
                {
                    if (v[i] == 0)
                    {
                        v[i] = 9;
                    }
                    else
                    {
                        v[i] = v[i] - 1;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}