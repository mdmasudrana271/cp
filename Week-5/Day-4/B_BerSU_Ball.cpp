#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int m;
    cin >> m;
    vector<int> v1(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v1[i];
    }
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (v[i] == v1[j] || v[i] + 1 == v1[j] || v[i] - 1 == v1[j])
            {
                cnt += 1;
                v1[j] = -2;
                break;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}