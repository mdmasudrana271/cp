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
        int n;
        cin >> n;
        map<string, int> frq;
        vector<vector<string>> ss(3, vector<string>(n));
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> ss[i][j];
                frq[ss[i][j]]++;
            }
        }
        int arr[3] = {0};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (frq[ss[i][j]] == 1)
                {
                    arr[i] += 3;
                }
                else if (frq[ss[i][j]] == 2)
                {
                    arr[i] += 1;
                }
            }
        }

        cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    }
    return 0;
}