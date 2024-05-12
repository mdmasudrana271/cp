#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << n / 2 << endl;
    for (int i = 0; i < (n / 2) - 1; i++)
    {
        cout << 2 << " ";
    }
    if (n % 2 == 0)
    {
        cout << 2 << " ";
    }
    else
    {
        cout << 3 << " ";
    }
    cout << endl;
    return 0;
}