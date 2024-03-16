#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = true;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            cout << i << endl;
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << -1 << endl;
    }
    return 0;
}