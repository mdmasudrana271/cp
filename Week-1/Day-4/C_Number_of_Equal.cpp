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
    int l = 0, r = 0;
    long long int cnt = 0;
    while (l < n && r < m)
    {
        int cnt1 = 0, cnt2 = 0, curr = a[l];
        while (a[l] == curr && l < n)
        {
            cnt1++;
            l++;
        }
        while (curr > b[r] && r < m)
        {
            r++;
        }
        while (b[r] == curr && r < m)
        {
            cnt2++;
            r++;
        }
        cnt += (1LL * cnt1 * cnt2);
    }

    cout << cnt << endl;

    return 0;
}