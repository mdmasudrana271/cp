#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int mult = c * 2;
    if (mult > a && mult <= b)
    {
        cout << mult;
    }
    else
    {
        cout << -1;
    }
    return 0;
}