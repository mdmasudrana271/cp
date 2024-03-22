#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k, s;
    cin >> k >> s;
    int cnt = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int res = s - i - j;
            if (res >= 0 && res <= k)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}