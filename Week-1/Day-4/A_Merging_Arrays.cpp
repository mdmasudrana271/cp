#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<int> c(n + m);
    int l = 0, r = 0, curr = 0;
    while (l < n && r < m)
    {
        if (a[l] <= b[r])
        {
            c[curr] = a[l];
            l++;
        }
        else
        {
            c[curr] = b[r];
            r++;
        }
        curr++;
    }

    while (l < n)
    {
        c[curr] = a[l];
        curr++;
        l++;
    }
    while (r < m)
    {
        c[curr] = b[r];
        curr++;
        r++;
    }

    for (int x : c)
    {
        cout << x << " ";
    }
    return 0;
}