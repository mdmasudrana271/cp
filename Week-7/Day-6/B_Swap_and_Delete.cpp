#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
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
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (zero > 0)
                {

                    zero--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (one > 0)
                {

                    one--;
                }
                else
                {
                    break;
                }
            }
        }
        cout << one + zero << endl;
    }
    return 0;
}