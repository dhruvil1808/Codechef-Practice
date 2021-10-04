#include <bits/stdc++.h>
using namespace std;
bool check_prime(int a)
{
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}
int p[2001];
int main()
{
    for (int i = 2; i <= 200; i++)
    {
        for (int j = i + 1; i * j <= 200; j++)
        {
            if (check_prime(i) && check_prime(j))
                p[i * j] = 1;
        }
    }
    int t, n;
    cin >> t;
    int fl[t];
    while (t--)
    {
        cin >> n;

        for (int i = 2; i < n; i++)
        {
            if (p[i] && p[n - i])
            {
                fl[i - 2] = 1;
                break;
            }
        }

        for (int i = 0; i < t; i++)
        {
            if (fl[i])
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}