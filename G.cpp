#include <iostream>
using namespace std;
int isprime(int x)
{
    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int checkSemiprime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (isprime(i))
        {
            for (int j = i; j < num; j++)
            {
                if (isprime(j))
                {
                    if (num == i * j)
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int checkSum(int semi[], int N, int k)
{
    int i;
    for (i = 0; i < k; i++)
    {
        for (int j = i; j < k; j++)
        {
            int sum = semi[i] + semi[j];
            if (sum == N)
            {
                return 1;
            }
        }
    }
    if (i == k)
        return 0;
}

int main()
{
    int T, N;
    cin >> T;
    int result[T];
    int semi[100];
    int k = 0;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        for (int j = 10; j < N; j++)
        {
            if (checkSemiprime(j))
                semi[k++] = j;
        }
        result[i] = checkSum(semi, N, k);
    }
    for (int i = 0; i < T; i++)
    {
        if (result[i] == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}