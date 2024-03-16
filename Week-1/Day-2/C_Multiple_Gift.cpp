#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (long long int i = a; i <= b; i *= 2)
    {
        cnt++;
    }
    cout << cnt;
    return 0;
}