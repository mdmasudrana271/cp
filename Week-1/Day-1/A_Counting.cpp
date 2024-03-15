#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    if (a > b)
    {
        cout << 0 << endl;
    }
    else
    {
        for (int i = a; i <= b; i++)
        {
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}