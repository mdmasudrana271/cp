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
        int m = n * (n - 1) / 2;
        vector<int> a(n), b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        int x = 1, idx = 0;
        int y = n - x;

        while (n - x > 0)
        {
            a[idx++] = b[y - 1];
            x++;
            y += n - x;
        }
        a[n - 1] = b[m - 1];
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}