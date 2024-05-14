#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b) * b)
using namespace std;

const int N = 1e6;
vector<bool> prime(N + 1, true);
void genPrime()
{
    for (int i = 2; i * i <= N; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= N; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

int main()
{
    // write c++ program code
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    genPrime();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        ll a, b;
        for (int i = n + 1; i < N; i++)
        {
            if (prime[i])
            {
                a = i;
                break;
            }
        }
        for (int i = a + n; i < N; i++)
        {
            if (prime[i])
            {
                b = i;
                break;
            }
        }
        cout << a * b << endl;
    }
    return 0;
}