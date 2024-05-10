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
        int n;
        cin >> n;
        vector<int> v(n), a;
        string s = "";
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (a.empty())
            {
                a.push_back(v[i]);
                s.push_back('1');
            }
            else
            {
                if (flag)
                {
                    if (v[i] < a.back())
                    {
                        s.push_back('0');
                    }
                    else
                    {
                        if (v[i] > a[0])
                        {
                            s.push_back('0');
                        }
                        else
                        {
                            s.push_back('1');
                            a.push_back(v[i]);
                        }
                    }
                }
                else
                {
                    if (v[i] >= a.back())
                    {
                        s.push_back('1');
                        a.push_back(v[i]);
                    }
                    else
                    {
                        if (v[i] > a[0])
                        {
                            s.push_back('0');
                        }
                        else
                        {
                            flag = true;
                            s.push_back('1');
                            a.push_back(v[i]);
                        }
                    }
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}