#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            cout << 0;
        }
    }
    else
    {
        int x = n;
        int cnt = 0;
        while (n != 0)
        {
            n = n / 10;
            cnt++;
        }
        if (cnt >= 4)
        {
            cout << x;
        }
        else
        {
            cnt = 4 - cnt;
            for (int i = 0; i < cnt; i++)
            {
                cout << 0;
            }
            cout << x;
        }
    }

    return 0;
}