#include <iostream>
using namespace std;
int main()
{
    int S, N[100], H[100][100];
    cout << "Enter the number of strips";
    cin >> S;
    if (S >= 1 && S <= 100)
    {
        for (int i = 0; i < S; i++)
        {
            cout << "Enter the number of Length";
            cin >> N[i];
            if (N[i] >= 3 && N[i] <= 100)
            {
                cout << "Enter Lengths";
                for (int j = 0; j < N[i]; j++)
                {
                    cin >> H[i][j];
                }
            }
        }
    }
    for (int i = 0; i < S; i++)
    {
        if (N[i] % 2 == 0 || H[i][0] != 1)
        {
            cout << "no\n";
            continue;
        }
        else
        {
            int x = N[i] / 2;
            for (int j = 0; j < N[i]; j++)
            {

                if (H[i][j] == j + 1 && j <= x || H[i][j] == H[i][j - 1] - 1 && j > x)
                {
                    if (j == N[i] - 1)
                    {
                        cout << "yes\n";
                        break;
                    }
                    continue;
                }
                else
                {
                    cout << "no \n";
                    break;
                }
            }
        }
    }
}