#include <iostream>
using namespace std;
int main()
{
	int T, n, k;
	int sum = 0;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		if (T >= 1 && T <= 1000 && sum <= 1000000)
		{
			int c = 0;
			cin >> n >> k;
			sum += n;
			int S[n];
			if (k >= 1 && k <= n && n <= 10000)
			{
				for (int i = 0; i < n; i++)
					cin >> S[i];
				if (S[i] >= 1 && S[i] <= 1000000000)
				{
					sort(S, S + n, greater<int>());
					for (int i = 0; i < n; i++)
					{
						if (S[i] >= S[k - 1])
							c++;
					}
					cout << c << endl;
				}
			}
		}
	}
}