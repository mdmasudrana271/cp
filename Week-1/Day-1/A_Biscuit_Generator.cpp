#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, t;
    cin >> a >> b >> t;
    int sum = 0;
    for (int i = a; i <= t; i += a)
    {
        sum += b;
    }
    cout << sum;
    return 0;
}