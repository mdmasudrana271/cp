#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

bool prime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    if (prime(n))
    {
        cout << 1 << endl;
    }
    else if (n % 2 == 0)
    {
        cout << 2 << endl;
    }
    else
    {
        if (prime(n - 2))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }

    return 0;
}