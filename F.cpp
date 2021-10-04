#include <iostream>
#include <string.h>
using namespace std;
int check(int A[], int B[], int N)
{
    int i = 0;
    for (i = 0; i < N; i++)
    {
        if (A[i] != B[i])
            break;
    }
    if (i == N)
        return 1;
    else
        return 0;
}

void operations(int A[], int x)
{
    for (int j = x; j < x + 3; j++)
    {
        A[j] = A[j] + j + 1;
    }
}

int rec(int A[], int B[], int N, int i)
{
    if (!check(A, B, N))
    {
        if (A[i] > B[i])
        {
            rec(A, B, N, i + 1);
        }
        else
        {
            operations(A, i);
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int main()
{
    int T, N;
    cin >> T;
    int result[T];
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        int A[N], B[N];
        for (int j = 0; j < N; j++)
        {
            cin >> A[i];
        }
        for (int j = 0; j < N; j++)
        {
            cin >> B[i];
        }
        result[i] = rec(A, B, N, 0) ? 1 : 0;
    }
    for (int i = 0; i < T; i++)
    {
        if (result[i] == 1)
            cout << "TAK\n";
        else
            cout << "NIE\n";
    }
    return 0;
}
