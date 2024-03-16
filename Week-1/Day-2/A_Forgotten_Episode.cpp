#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<bool> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[x] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!v[i])
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}