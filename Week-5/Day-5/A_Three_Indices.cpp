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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool flag = true;
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
            {
                flag = false;
                cout << "YES" << endl;
                cout << (i - 1) + 1 << " " << i + 1 << " " << (i + 1) + 1 << endl;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}