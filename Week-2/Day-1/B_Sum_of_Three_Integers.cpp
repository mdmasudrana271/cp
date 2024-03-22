#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, s;
    cin >> x >> s;
    int cnt = 0;
    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            int z = s - i - j;
            if (z >= 0 && z <= s)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}