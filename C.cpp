#include <iostream>
#include <string.h>
using namespace std;
int check(string str)
{
    int A = 0;
    int X = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '.')
        {
            if (X == 0)
                A = 1;
            else
                continue;
        }
        else if (str[i] == 'H' && X == 0)
        {
            X = 1;
            A = 0;
        }
        else if (str[i] == 'T' && X == 1)
        {
            A = 1;
            X = 0;
        }
        else
            return 0;
    }
    return A;
}
int main()
{
    int R, L;
    cin >> R;
    if (R < 1 || R > 500)
        return 1;
    int temp = R;
    string report[R];
    for (int i = 0; R > 0; R--)
    {
        cin >> L;
        string inpt;
        cin >> inpt;
        report[i] = check(string(inpt)) ? "Valid\n" : "Invalid\n";
        i++;
    }
    for (int j = 0; j < temp; j++)
    {
        cout << report[j];
    }
    return 0;
}