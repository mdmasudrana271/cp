#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b) * b)
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    cin >> x >> y;

    if (x == y || min(x, y) == 2 && max(x, y) == 4)
    {
        cout << "=" << endl;
    }
    else if (x == 1 || y == 1)
    {
        if (x < y)
        {

            cout << "<" << endl;
        }
        else
        {

            cout << ">" << endl;
        }
    }
    else if (min(x, y) == 2 && max(x, y) == 3)
    {
        if (x == 2 && y == 3)
        {
            cout << "<" << endl;
        }
        else if (x == 3 && y == 2)
        {
            cout << ">" << endl;
        }
    }
    else if (x < y)
    {
        cout << ">" << endl;
    }
    else
    {
        cout << "<" << endl;
    }
    return 0;
}