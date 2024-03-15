#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << a + b;
    }
    else if (a > b)
    {
        cout << (a + a) - 1;
    }
    else
    {
        cout << (b + b) - 1;
    }
    return 0;
}