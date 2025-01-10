#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
using namespace std;
long long a[505][505];
long long F[101];
void fibo()
{
	F[0] = 0;
	F[1] = 1;
	for (int i = 2; i <= 90; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	fibo();
	int n;
	cin >> n;
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
	int cnt = 0;
	while (h1 <= h2 && c1 <= c2)
	{
		for (int i = c1; i <= c2; i++)
		{
			a[h1][i] = F[cnt];
			cnt++;
		}
		h1++;
		for (int i = h1; i <= h2; i++)
		{
			a[i][c2] = F[cnt];
			cnt++;
		}
		c2--;
		if (c1 <= c2)
		{
			for (int i = c2; i >= c1; i--)
			{
				a[h2][i] = F[cnt];
				cnt++;
			}
			h2--;
		}
		if (h1 <= h2)
		{
			for (int i = h2; i >= h1; i--)
			{
				a[i][c1] = F[cnt];
				cnt++;
			}
			c1++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
