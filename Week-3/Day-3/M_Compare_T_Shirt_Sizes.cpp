#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.size(), m = b.size();
        char ch_a, ch_b;
        int x_a = 0, x_b = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 'X')
            {
                ch_a = a[i];
            }
            else
            {
                x_a++;
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (b[i] != 'X')
            {
                ch_b = b[i];
            }
            else
            {
                x_b++;
            }
        }

        if (ch_a == ch_b)
        {
            if (x_a == x_b || ch_a == 'M')
            {
                cout << "=" << endl;
            }
            else if (ch_a == 'S')
            {
                if (x_a > x_b)
                {
                    cout << "<" << endl;
                }
                else
                {
                    cout << ">" << endl;
                }
            }
            else if (ch_a == 'L')
            {
                if (x_a > x_b)
                {
                    cout << ">" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }
        }
        else if (ch_a == 'S')
        {
            cout << "<" << endl;
        }
        else if (ch_a == 'M' && ch_b == 'S')
        {
            cout << ">" << endl;
        }
        else if (ch_a == 'M' && ch_b == 'L')
        {
            cout << "<" << endl;
        }
        else if (ch_a == 'L')
        {
            cout << ">" << endl;
        }
    }
    return 0;
}