#include <iostream>
using namespace std;
int main()
{
    int T, N;
    cin >> T;
    for (int j = 0; j < T; j++)
    {
        cin >> N;
        int A[N], i;
        for (i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int B[N];
        for (i = 0; i < N; i++)
        {
            cin >> B[i];
        }
        int count = 0, temp = A[0];
        for (i = 0; i < N; i++)
        {
            if (B[i] <= temp)
            {
                ++count;
            }
            temp = A[i + 1] - A[i];
        }
        cout << count << "\n";
    }
    return 0;
}